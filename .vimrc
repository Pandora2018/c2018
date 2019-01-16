" Vim Configure File

call plug#begin('~/.vim/plugged')
" Plug 'Valloric/YouCompleteMe'

" youdao translation
" Plug 'iamcco/dict.vim'

" Plug 'Raimondi/delimitMate'

Plug 'scrooloose/nerdcommenter'
Plug 'Shougo/neocomplete.vim'

" Insert or delete brackets, parens, quotes in pair.
Plug 'jiangmiao/auto-pairs'

Plug 'kien/rainbow_parentheses.vim'

" vim-copyright is a plug for your file to add/update copyright by bbxytl.
Plug 'nine2/vim-copyright'

" Code snippets engine for Vim, And snippets library. Write codes in a smooth, quick and comfortable way.
" Plug 'drmingdrmer/xptemplate'

" A vim plugin to display the indention levels with thin vertical lines 
" Plug 'Yggdroot/indentLine'

" vim-smooth-scroll makes scrolling in Vim nice and smooth.
Plug 'terryma/vim-smooth-scroll'

" Simplify Doxygen documentation in C, C++, Python.
" Plug 'vim-scripts/DoxygenToolkit.vim'

" True Sublime Text style multiple selections for Vim 
" Plug 'terryma/vim-multiple-cursors'

" Display c/c++ function declaration in vim command/status line. 
Plug 'mbbill/echofunc'

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
	colorscheme koehler	    " 主题
	set autoindent              " 自动缩进"
	set autowrite               " 自动保存文件"
	set smartindent             " 智能对齐方式
	set ignorecase smartcase    " 智能忽略大小写"
	set cursorline           	" 高亮当前行"
	" 分割出来的窗口位于当前窗口下边/右边
	set splitbelow
	set splitright
	set ruler                   	" 显示当前光标的位置
	" set hlsearch          	" 高亮显示
	set incsearch         		" 实时显示查找的内容
	set wrapscan        		" 在文件结尾处停止查找
	set wrap
	set autowrite         		" 自动保存文件"
	set lcs=tab:\|\
	set laststatus=1
	set linespace=3				" 行间距
	set noshowmode				" 在状态栏上不显示vim当前的模式
	set fillchars=vert:.		" 分屏竖线
	nnoremap <space> @=((foldclosed(line('.')) < 0) ? 'zc' : 'zo')<CR>		" 空格控制打开或关闭折叠
	" cterm 表示原生vim设置样式, 设置为NONE表示可以自定义设置
	" red（红），white（白），black（黑），green（绿），yellow（黄），blue（蓝），purple（紫），gray（灰），brown（棕），tan(褐色)，syan(青色)
	" 更多高亮颜色设置, 可以:h highlight 查看manual
	" set cursorcolumn  	" or set cuc 设置光标所在的列
	" highlight CursorColumn cterm=NONE ctermbg=blue ctermfg=NONE guibg=NONE guifg=NONE
	" set cursorline    	"or set cul 设置光标所在的行
	" highlight CursorLine cterm=NONE ctermbg=gray ctermfg=NONE guibg=NONE guifg=NONE
" }}}

" line number {{{
set nu                		" 显示行号
augroup relative_numbser
	autocmd!
	autocmd InsertEnter * :set norelativenumber
 	autocmd InsertLeave * :set relativenumber	" 显示相对行号
augroup END
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
    " iabbrev string String
	" iabbrev adt ADT
	" iabbrev seg segment
	" C lanuage abbr
	iabbrev main int main(void)<CR>{<CR><CR><CR>return 0;}
	" iabbrev #io #include <stdio.h><CR>
	" iabbrev #is #include <string.h><CR>
	" iabbrev #im #include <math.h><CR>
" }}}

" mydiff {{{
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

" NERD_commenter {{{
" NERD_commenter插件方法:
"\cc 注释当前行和选中行
"\c<空格> 如果被选区域有部分被注释，则对被选区域执行取消注释操作，其它情况执行反转注释操作
"\cm 对被选区域用一对注释符进行注释，前面的注释对每一行都会添加注释
"\ci 执行反转注释操作，选中区域注释部分取消注释，非注释部分添加注释
"\cs 添加性感的注释，代码开头介绍部分通常使用该注释
"\cy 添加注释，并复制被添加注释的部分
"\c$ 注释当前光标到改行结尾的内容
"\cA 跳转到该行结尾添加注释，并进入编辑模式
"\ca 转换注释的方式，比如： /**/和//
"\cl \cb 左对齐和左右对其，左右对齐主要针对/**/
"\cu 取消注释

let g:NERDSpaceDelims=1
" }}}

" neocomplete {{{
" Note: This option must be set in .vimrc(_vimrc).  NOT IN .gvimrc(_gvimrc)!
" Disable AutoComplPop.
let g:acp_enableAtStartup = 0
" Use neocomplete.
let g:neocomplete#enable_at_startup = 1
" Use smartcase.
let g:neocomplete#enable_smart_case = 1
" Set minimum syntax keyword length.
let g:neocomplete#sources#syntax#min_keyword_length = 3

" Define dictionary.
let g:neocomplete#sources#dictionary#dictionaries = {
    \ 'default' : '',
    \ 'vimshell' : $HOME.'/.vimshell_hist',
    \ 'scheme' : $HOME.'/.gosh_completions'
    \ }

" Define keyword.
if !exists('g:neocomplete#keyword_patterns')
    let g:neocomplete#keyword_patterns = {}
endif
let g:neocomplete#keyword_patterns['default'] = '\h\w*'

" Plugin key-mappings.
inoremap <expr><C-g>     neocomplete#undo_completion()
inoremap <expr><C-l>     neocomplete#complete_common_string()

" Recommended key-mappings.
" <CR>: close popup and save indent.
inoremap <silent> <CR> <C-r>=<SID>my_cr_function()<CR>
function! s:my_cr_function()
  return (pumvisible() ? "\<C-y>" : "" ) . "\<CR>"
  " For no inserting <CR> key.
  "return pumvisible() ? "\<C-y>" : "\<CR>"
endfunction
" <TAB>: completion.
inoremap <expr><TAB>  pumvisible() ? "\<C-n>" : "\<TAB>"
" <C-h>, <BS>: close popup and delete backword char.
inoremap <expr><C-h> neocomplete#smart_close_popup()."\<C-h>"
inoremap <expr><BS> neocomplete#smart_close_popup()."\<C-h>"
" Close popup by <Space>.
"inoremap <expr><Space> pumvisible() ? "\<C-y>" : "\<Space>"

" AutoComplPop like behavior.
"let g:neocomplete#enable_auto_select = 1

" Shell like behavior(not recommended).
"set completeopt+=longest
"let g:neocomplete#enable_auto_select = 1
"let g:neocomplete#disable_auto_complete = 1
"inoremap <expr><TAB>  pumvisible() ? "\<Down>" : "\<C-x>\<C-u>"

" Enable omni completion.
autocmd FileType css setlocal omnifunc=csscomplete#CompleteCSS
autocmd FileType html,markdown setlocal omnifunc=htmlcomplete#CompleteTags
autocmd FileType javascript setlocal omnifunc=javascriptcomplete#CompleteJS
autocmd FileType python setlocal omnifunc=pythoncomplete#Complete
autocmd FileType xml setlocal omnifunc=xmlcomplete#CompleteTags

" Enable heavy omni completion.
if !exists('g:neocomplete#sources#omni#input_patterns')
  let g:neocomplete#sources#omni#input_patterns = {}
endif
"let g:neocomplete#sources#omni#input_patterns.php = '[^. \t]->\h\w*\|\h\w*::'
"let g:neocomplete#sources#omni#input_patterns.c = '[^.[:digit:] *\t]\%(\.\|->\)'
"let g:neocomplete#sources#omni#input_patterns.cpp = '[^.[:digit:] *\t]\%(\.\|->\)\|\h\w*::'

" For perlomni.vim setting.
" https://github.com/c9s/perlomni.vim
let g:neocomplete#sources#omni#input_patterns.perl = '\h\w*->\h\w*\|\h\w*::'
" }}}

" auto-pairs {{{
let g:AutoPairs = {'(':')', '[':']', '{':'}',"'":"'",'"':'"'}
" 设置要自动配对的符号
let g:AutoPairs['<']='>'
" 添加要自动配对的符号<>
" let b:AutoPairs = g:AutoParis
" 设置要自动配对的符号，默认为g:AutoPairs，可以通过自动命令来对不同文件类型设置不同自动匹配对符号。
let g:AutoPairsShortcutToggle = '<M-p>'
" 设置插件打开/关闭的快捷键，默认为ALT+p。
let g:AutoPairsShortcutFastWrap = '<M-e>'
" 设置自动为文本添加圆括号的快捷键，默认为ALT+e。
let g:AutoPairsShortcutJump = '<M-n>'
" 设置调到下一层括号对的快捷键，默认为ALT+n。
let g:AutoPairsShortcutBackInsert = '<M-b>'
" 设置撤销飞行模式的快捷键，默认为ALT+b。
let g:AutoPairsMapBS = 1
" 把BACKSPACE键映射为删除括号对和引号，默认为1。
let g:AutoPairsMapCh = 1
" 把ctrl+h键映射为删除括号对和引号，默认为1。
let g:AutoPairsMapCR = 1
" 把ENTER键映射为换行并缩进，默认为1。
let g:AutoPairsCenterLine = 1
" 当g:AutoPairsMapCR为1时，且文本位于窗口底部时，自动移到窗口中间。
let g:AutoPairsMapSpace = 1
" 把SPACE键映射为在括号两侧添加空格，默认为1。
let g:AutoPairsFlyMode = 0
" 启用飞行模式，默认为0。
let g:AutoPairsMultilineClose = 1
" 启用跳出多行括号对，默认为1，为0则只能跳出同一行的括号。
" }}}

" rainbow_parentheses {{{
let g:rbpt_colorpairs = [
    \ ['brown',       'RoyalBlue3'],
    \ ['Darkblue',    'SeaGreen3'],
    \ ['darkgray',    'DarkOrchid3'],
    \ ['darkgreen',   'firebrick3'],
    \ ['darkcyan',    'RoyalBlue3'],
    \ ['darkred',     'SeaGreen3'],
    \ ['darkmagenta', 'DarkOrchid3'],
    \ ['brown',       'firebrick3'],
    \ ['gray',        'RoyalBlue3'],
    \ ['black',       'SeaGreen3'],
    \ ['darkmagenta', 'DarkOrchid3'],
    \ ['Darkblue',    'firebrick3'],
    \ ['darkgreen',   'RoyalBlue3'],
    \ ['darkcyan',    'SeaGreen3'],
    \ ['darkred',     'DarkOrchid3'],
    \ ['red',         'firebrick3'],
    \ ]
let g:rbpt_max = 40
let g:rbpt_loadcmd_toggle = 0
au VimEnter * RainbowParenthesesToggle
au Syntax * RainbowParenthesesLoadRound
au Syntax * RainbowParenthesesLoadSquare
au Syntax * RainbowParenthesesLoadBraces
" Commands:
" :RainbowParenthesesToggle       " Toggle it on/off
" :RainbowParenthesesLoadRound    " (), the default when toggling
" :RainbowParenthesesLoadSquare   " []
" :RainbowParenthesesLoadBraces   " {}
" :RainbowParenthesesLoadChevrons " <>
" }}}

" copyright {{{
" use :CopyrightAdd to add copyright for your file.
" use :CopyrightUpdate to update copyright.
nmap <leader>ra :CopyrightAdd<CR>
nmap <leader>ru :CopyrightUpdate<CR>
let g:file_copyright_name = "Pandora"
let g:file_copyright_email = "pandora@github.com"
" add the config to auto add copyright to your file
let g:file_copyright_auto_filetypes = ['sh', 'plx', 'pl', 'pm', 'py', 'python', 'h', 'hpp', 'c', 'cpp', 'java']
" }}}

" indentLine {{{
" let g:indentLine_color_term = 239
" where 'c' can be any ASCII character. You can also use one of ¦, ┆, │, ⎸, or ▏ to display more beautiful lines. However, these characters will only work with files whose encoding is UTF-8.
" let g:indentLine_char = '¦'
" map <C-i> :IndentLinesToggle<CR> 
" }}}

" vim-smooth-scroll {{{
noremap <silent> <c-u> :call smooth_scroll#up(&scroll, 0, 2)<CR>
noremap <silent> <c-d> :call smooth_scroll#down(&scroll, 0, 2)<CR>
noremap <silent> <c-b> :call smooth_scroll#up(&scroll*2, 0, 4)<CR>
noremap <silent> <c-f> :call smooth_scroll#down(&scroll*2, 0, 4)<CR>
" }}}
