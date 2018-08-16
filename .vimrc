" Vim Configure File

call plug#begin('~/.vim/plugged')
" Plug 'skywind3000/asyncrun.vim'
" Plug 'Valloric/YouCompleteMe'
Plug 'ianva/vim-youdao-translater'	" youdao translation

call plug#end()

" General {{{
	filetype plugin indent on
	" vim 文件折叠方式为 marker
	augroup ft_vim
	    au!
	    au FileType vim setlocal foldmethod=marker
	augroup END
	" 窗口显示
	if has("gui_running")
		au GUIEnter * simalt ~x "窗口启动时自动最大化
		set guioptions-=m        "hide menu"
		set guioptions-=T        "hide tool"
		set guioptions-=r		" remove right-hand scroll bar
		set guioptions-=l		" remove left-hand scroll bar
		set guioptions-=L		" remove left-hand scroll bar even if there is a vertical split
		set guioptions-=b		" remove bottom scroll bar
	endif
	set nocompatible
	set history=1024
	set whichwrap=b,s,<,>,[,]
	set backspace=indent,eol,start whichwrap+=<,>,[,]
	" Vim 的默认寄存器和系统剪贴板共享
	set clipboard+=unnamed
	" 设置 alt 键不映射到菜单栏
	set winaltkeys=no
	syntax on                   " 语法高亮
	colorscheme desert			" 主题
	set autoindent              " 自动缩进" 
	set autowrite               " 自动保存文件"
	set smartindent             " 智能对齐方式
	set ignorecase smartcase    " 智能忽略大小写"
	" set cursorline           	" 高亮当前行"
	" 分割出来的窗口位于当前窗口下边/右边
	set splitbelow
	set splitright
	set nu                		" 显示行号
	set ruler                   " 显示当前光标的位置
	" set hlsearch          	" 高亮显示
	set incsearch         		" 实时显示查找的内容
	set wrapscan        		" 在文件结尾处停止查找
	set wrap
	set autowrite         		" 自动保存文件"
	set lcs=tab:\|\
	set laststatus=1
	set linespace=1				" 行间距
	set noshowmode				" 在状态栏上不显示vim当前的模式
	set fillchars=vert:.		" 分屏竖线
	nnoremap <space> @=((foldclosed(line('.')) < 0) ? 'zc' : 'zo')<CR>		" 空格控制打开或关闭折叠
" }}}

" backup {{{
	" set backup 
	" set backupext=.bak
	" set backupdir=e:\Vim\bak
" }}}

" font {{{
	set fencs=utf-8,usc-bom,gb18030,gb2312,gbk
	set diffexpr=MyDiff()
	" set guifont=Inconsolata:h15:b
	set guifont=Monaco:h10:b
	"set foldmethod=indent
" }}}

" Indentation {{{
	set ts=4
	" set softtabstop=4
	set shiftwidth=4
	" set listchars=tab:?\ ,eol:?,trail:·,extends:>,precedes:<
" }}}

" 标签页栏中去除当前所编辑文件的路径信息，只保留文件名{{{
function! ShortTabLabel()
    let bufnrlist = tabpagebuflist (v:lnum)
    let label = bufname (bufnrlist[tabpagewinnr (v:lnum) -1])
    let filename = fnamemodify (label, ':t')
    return filename
endfunction
set guitablabel=%{ShortTabLabel()}
" }}}

" shortcuts {{{
    let g:mapleader = ','
	nmap <leader>e :e $HOME/_vimrc<CR>
	nmap <leader>s :source $HOME\_vimrc<CR>
	" 插入模式移动光标 alt + 方向键
	inoremap <M-j> <Down>
	inoremap <M-k> <Up>
	inoremap <M-h> <left>
	inoremap <M-l> <Right>
	" IDE like delete
	inoremap <C-BS> <Esc>bdei
	" 转换当前行为大写
	inoremap <C-u> <esc>mzgUiw`za
	" 命令模式下的行首尾
	cnoremap <C-a> <home>
	cnoremap <C-e> <end>
	exe 'inoremap <script> <C-V>' paste#paste_cmd['i']
	exe 'vnoremap <script> <C-V>' paste#paste_cmd['v']
	" 复制当前文件/路径到剪贴板
	nmap <leader>fn :let @*=substitute(expand("%"), "/", "\\", "g")<CR>
	nmap <leader>fp :let @*=substitute(expand("%:p"), "/", "\\", "g")<CR>
	" 切换Buffer
	nnoremap <C-right> :bn<CR>
	nnoremap <C-left> :bp<CR>	
" }}}

" Keywords {{{
	iabbrev main int main(void)
	iabbrev string String
	iabbrev adt ADT
	iabbrev seg segment
" }}}

" mydiff{{{
function! MyDiff()
  let opt = '-a --binary '
  if &diffopt =~ 'icase' | let opt = opt . '-i ' | endif
  if &diffopt =~ 'iwhite' | let opt = opt . '-b ' | endif
  let arg1 = v:fname_in
  if arg1 =~ ' ' | let arg1 = '"' . arg1 . '"' | endif
  let arg2 = v:fname_new
  if arg2 =~ ' ' | let arg2 = '"' . arg2 . '"' | endif
  let arg3 = v:fname_out
  if arg3 =~ ' ' | let arg3 = '"' . arg3 . '"' | endif
  silent execute '!d:\Vim\vim64\diff ' . opt . arg1 . ' ' . arg2 . ' > ' . arg3
endfunction
" }}}

