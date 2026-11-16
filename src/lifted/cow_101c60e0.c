/* f_0x101c60e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
uint32_t cow_fn_101c60e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_c58;
    uint32_t loc_c74;
    uint32_t loc_c7c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 3220u);

    wr32(sp0 - 0xc60u, in_ebx);
    wr32(sp0 - 0xc64u, in_ebp);
    wr32(sp0 - 0xc68u, in_esi);
    wr32(sp0 - 0xc6cu, in_edi);
    if ((int32_t)arg2 > 1050)
    {
        eax = in_eax;
    }
    else
    {
        wr32(sp0 - 0xc70u, arg2);
        wr32(sp0 - 0xc74u, arg1);
        wr32(sp0 - 0xc78u, sp0 - 0x838u);
        g->eax = arg1;
        g->ecx = sp0 - 0x838u;
        g->esp = sp0 - 0xc64u;
        t1 = cow_cdecl(g, COW_IMG(0x1018fe70u), 5, sp0 - 0x838u, arg1, arg2, in_edi, in_esi);
        t2 = g->ecx;
        if (t1 != 0u)
        {
            eax = t1;
        }
        else
        {
            eax = t1;
            ecx = t2;
            wr32(sp0 - 0xc70u, 0x41au);
            wr32(sp0 - 0xc74u, arg2);
            wr32(sp0 - 0xc78u, sp0 - 0x838u);
            wr8(arg2 + sp0 - 0x838u, (uint8_t)eax);
            wr32(sp0 - 0xc5cu, 0x80808080u);
            g->eax = eax;
            g->esp = sp0 - 0xc6cu;
            t3 = cow_call_regs(g, COW_IMG(0x10190140u), g->eax, g->ecx, sp0 - 0x838u, 1, 3, sp0 - 0x838u, arg2, 0x41au);
            wr32(sp0 - 0xc7cu, self + 0x6a4u);
            wr32(sp0 - 0xc80u, arg5);
            wr32(sp0 - 0xc84u, 0x41au);
            wr32(sp0 - 0xc88u, sp0 - 0x41cu);
            wr32(sp0 - 0xc8cu, t3);
            wr32(sp0 - 0xc90u, sp0 - 0x838u);
            g->eax = sp0 - 0x838u;
            g->esp = sp0 - 0x420u;
            t4 = cow_bridge_indirect(g, COW_IMG(0x10190280u), 0u, 540u, (const uint32_t[]){sp0 - 0x838u, t3, sp0 - 0x41cu, 0x41au, arg5, self + 0x6a4u, sp0 - 0x838u, arg2, 0x41au, rd32(sp0 - 0xc6cu), rd32(sp0 - 0xc68u), rd32(sp0 - 0xc64u), rd32(sp0 - 0xc60u), 0x80808080u, rd32(sp0 - 0xc58u), rd32(sp0 - 0xc54u), rd32(sp0 - 0xc50u), rd32(sp0 - 0xc4cu), rd32(sp0 - 0xc48u), rd32(sp0 - 0xc44u), rd32(sp0 - 0xc40u), rd32(sp0 - 0xc3cu), rd32(sp0 - 0xc38u), rd32(sp0 - 0xc34u), rd32(sp0 - 0xc30u), rd32(sp0 - 0xc2cu), rd32(sp0 - 0xc28u), rd32(sp0 - 0xc24u), rd32(sp0 - 0xc20u), rd32(sp0 - 0xc1cu), rd32(sp0 - 0xc18u), rd32(sp0 - 0xc14u), rd32(sp0 - 0xc10u), rd32(sp0 - 0xc0cu), rd32(sp0 - 0xc08u), rd32(sp0 - 0xc04u), rd32(sp0 - 0xc00u), rd32(sp0 - 0xbfcu), rd32(sp0 - 0xbf8u), rd32(sp0 - 0xbf4u), rd32(sp0 - 0xbf0u), rd32(sp0 - 0xbecu), rd32(sp0 - 0xbe8u), rd32(sp0 - 0xbe4u), rd32(sp0 - 0xbe0u), rd32(sp0 - 0xbdcu), rd32(sp0 - 0xbd8u), rd32(sp0 - 0xbd4u), rd32(sp0 - 0xbd0u), rd32(sp0 - 0xbccu), rd32(sp0 - 0xbc8u), rd32(sp0 - 0xbc4u), rd32(sp0 - 0xbc0u), rd32(sp0 - 0xbbcu), rd32(sp0 - 0xbb8u), rd32(sp0 - 0xbb4u), rd32(sp0 - 0xbb0u), rd32(sp0 - 0xbacu), rd32(sp0 - 0xba8u), rd32(sp0 - 0xba4u), rd32(sp0 - 0xba0u), rd32(sp0 - 0xb9cu), rd32(sp0 - 0xb98u), rd32(sp0 - 0xb94u), rd32(sp0 - 0xb90u), rd32(sp0 - 0xb8cu), rd32(sp0 - 0xb88u), rd32(sp0 - 0xb84u), rd32(sp0 - 0xb80u), rd32(sp0 - 0xb7cu), rd32(sp0 - 0xb78u), rd32(sp0 - 0xb74u), rd32(sp0 - 0xb70u), rd32(sp0 - 0xb6cu), rd32(sp0 - 0xb68u), rd32(sp0 - 0xb64u), rd32(sp0 - 0xb60u), rd32(sp0 - 0xb5cu), rd32(sp0 - 0xb58u), rd32(sp0 - 0xb54u), rd32(sp0 - 0xb50u), rd32(sp0 - 0xb4cu), rd32(sp0 - 0xb48u), rd32(sp0 - 0xb44u), rd32(sp0 - 0xb40u), rd32(sp0 - 0xb3cu), rd32(sp0 - 0xb38u), rd32(sp0 - 0xb34u), rd32(sp0 - 0xb30u), rd32(sp0 - 0xb2cu), rd32(sp0 - 0xb28u), rd32(sp0 - 0xb24u), rd32(sp0 - 0xb20u), rd32(sp0 - 0xb1cu), rd32(sp0 - 0xb18u), rd32(sp0 - 0xb14u), rd32(sp0 - 0xb10u), rd32(sp0 - 0xb0cu), rd32(sp0 - 0xb08u), rd32(sp0 - 0xb04u), rd32(sp0 - 0xb00u), rd32(sp0 - 0xafcu), rd32(sp0 - 0xaf8u), rd32(sp0 - 0xaf4u), rd32(sp0 - 0xaf0u), rd32(sp0 - 0xaecu), rd32(sp0 - 0xae8u), rd32(sp0 - 0xae4u), rd32(sp0 - 0xae0u), rd32(sp0 - 0xadcu), rd32(sp0 - 0xad8u), rd32(sp0 - 0xad4u), rd32(sp0 - 0xad0u), rd32(sp0 - 0xaccu), rd32(sp0 - 0xac8u), rd32(sp0 - 0xac4u), rd32(sp0 - 0xac0u), rd32(sp0 - 0xabcu), rd32(sp0 - 0xab8u), rd32(sp0 - 0xab4u), rd32(sp0 - 0xab0u), rd32(sp0 - 0xaacu), rd32(sp0 - 0xaa8u), rd32(sp0 - 0xaa4u), rd32(sp0 - 0xaa0u), rd32(sp0 - 0xa9cu), rd32(sp0 - 0xa98u), rd32(sp0 - 0xa94u), rd32(sp0 - 0xa90u), rd32(sp0 - 0xa8cu), rd32(sp0 - 0xa88u), rd32(sp0 - 0xa84u), rd32(sp0 - 0xa80u), rd32(sp0 - 0xa7cu), rd32(sp0 - 0xa78u), rd32(sp0 - 0xa74u), rd32(sp0 - 0xa70u), rd32(sp0 - 0xa6cu), rd32(sp0 - 0xa68u), rd32(sp0 - 0xa64u), rd32(sp0 - 0xa60u), rd32(sp0 - 0xa5cu), rd32(sp0 - 0xa58u), rd32(sp0 - 0xa54u), rd32(sp0 - 0xa50u), rd32(sp0 - 0xa4cu), rd32(sp0 - 0xa48u), rd32(sp0 - 0xa44u), rd32(sp0 - 0xa40u), rd32(sp0 - 0xa3cu), rd32(sp0 - 0xa38u), rd32(sp0 - 0xa34u), rd32(sp0 - 0xa30u), rd32(sp0 - 0xa2cu), rd32(sp0 - 0xa28u), rd32(sp0 - 0xa24u), rd32(sp0 - 0xa20u), rd32(sp0 - 0xa1cu), rd32(sp0 - 0xa18u), rd32(sp0 - 0xa14u), rd32(sp0 - 0xa10u), rd32(sp0 - 0xa0cu), rd32(sp0 - 0xa08u), rd32(sp0 - 0xa04u), rd32(sp0 - 0xa00u), rd32(sp0 - 0x9fcu), rd32(sp0 - 0x9f8u), rd32(sp0 - 0x9f4u), rd32(sp0 - 0x9f0u), rd32(sp0 - 0x9ecu), rd32(sp0 - 0x9e8u), rd32(sp0 - 0x9e4u), rd32(sp0 - 0x9e0u), rd32(sp0 - 0x9dcu), rd32(sp0 - 0x9d8u), rd32(sp0 - 0x9d4u), rd32(sp0 - 0x9d0u), rd32(sp0 - 0x9ccu), rd32(sp0 - 0x9c8u), rd32(sp0 - 0x9c4u), rd32(sp0 - 0x9c0u), rd32(sp0 - 0x9bcu), rd32(sp0 - 0x9b8u), rd32(sp0 - 0x9b4u), rd32(sp0 - 0x9b0u), rd32(sp0 - 0x9acu), rd32(sp0 - 0x9a8u), rd32(sp0 - 0x9a4u), rd32(sp0 - 0x9a0u), rd32(sp0 - 0x99cu), rd32(sp0 - 0x998u), rd32(sp0 - 0x994u), rd32(sp0 - 0x990u), rd32(sp0 - 0x98cu), rd32(sp0 - 0x988u), rd32(sp0 - 0x984u), rd32(sp0 - 0x980u), rd32(sp0 - 0x97cu), rd32(sp0 - 0x978u), rd32(sp0 - 0x974u), rd32(sp0 - 0x970u), rd32(sp0 - 0x96cu), rd32(sp0 - 0x968u), rd32(sp0 - 0x964u), rd32(sp0 - 0x960u), rd32(sp0 - 0x95cu), rd32(sp0 - 0x958u), rd32(sp0 - 0x954u), rd32(sp0 - 0x950u), rd32(sp0 - 0x94cu), rd32(sp0 - 0x948u), rd32(sp0 - 0x944u), rd32(sp0 - 0x940u), rd32(sp0 - 0x93cu), rd32(sp0 - 0x938u), rd32(sp0 - 0x934u), rd32(sp0 - 0x930u), rd32(sp0 - 0x92cu), rd32(sp0 - 0x928u), rd32(sp0 - 0x924u), rd32(sp0 - 0x920u), rd32(sp0 - 0x91cu), rd32(sp0 - 0x918u), rd32(sp0 - 0x914u), rd32(sp0 - 0x910u), rd32(sp0 - 0x90cu), rd32(sp0 - 0x908u), rd32(sp0 - 0x904u), rd32(sp0 - 0x900u), rd32(sp0 - 0x8fcu), rd32(sp0 - 0x8f8u), rd32(sp0 - 0x8f4u), rd32(sp0 - 0x8f0u), rd32(sp0 - 0x8ecu), rd32(sp0 - 0x8e8u), rd32(sp0 - 0x8e4u), rd32(sp0 - 0x8e0u), rd32(sp0 - 0x8dcu), rd32(sp0 - 0x8d8u), rd32(sp0 - 0x8d4u), rd32(sp0 - 0x8d0u), rd32(sp0 - 0x8ccu), rd32(sp0 - 0x8c8u), rd32(sp0 - 0x8c4u), rd32(sp0 - 0x8c0u), rd32(sp0 - 0x8bcu), rd32(sp0 - 0x8b8u), rd32(sp0 - 0x8b4u), rd32(sp0 - 0x8b0u), rd32(sp0 - 0x8acu), rd32(sp0 - 0x8a8u), rd32(sp0 - 0x8a4u), rd32(sp0 - 0x8a0u), rd32(sp0 - 0x89cu), rd32(sp0 - 0x898u), rd32(sp0 - 0x894u), rd32(sp0 - 0x890u), rd32(sp0 - 0x88cu), rd32(sp0 - 0x888u), rd32(sp0 - 0x884u), rd32(sp0 - 0x880u), rd32(sp0 - 0x87cu), rd32(sp0 - 0x878u), rd32(sp0 - 0x874u), rd32(sp0 - 0x870u), rd32(sp0 - 0x86cu), rd32(sp0 - 0x868u), rd32(sp0 - 0x864u), rd32(sp0 - 0x860u), rd32(sp0 - 0x85cu), rd32(sp0 - 0x858u), rd32(sp0 - 0x854u), rd32(sp0 - 0x850u), rd32(sp0 - 0x84cu), rd32(sp0 - 0x848u), rd32(sp0 - 0x844u), rd32(sp0 - 0x840u), rd32(sp0 - 0x83cu), rd32(sp0 - 0x838u), rd32(sp0 - 0x834u), rd32(sp0 - 0x830u), rd32(sp0 - 0x82cu), rd32(sp0 - 0x828u), rd32(sp0 - 0x824u), rd32(sp0 - 0x820u), rd32(sp0 - 0x81cu), rd32(sp0 - 0x818u), rd32(sp0 - 0x814u), rd32(sp0 - 0x810u), rd32(sp0 - 0x80cu), rd32(sp0 - 0x808u), rd32(sp0 - 0x804u), rd32(sp0 - 0x800u), rd32(sp0 - 0x7fcu), rd32(sp0 - 0x7f8u), rd32(sp0 - 0x7f4u), rd32(sp0 - 0x7f0u), rd32(sp0 - 0x7ecu), rd32(sp0 - 0x7e8u), rd32(sp0 - 0x7e4u), rd32(sp0 - 0x7e0u), rd32(sp0 - 0x7dcu), rd32(sp0 - 0x7d8u), rd32(sp0 - 0x7d4u), rd32(sp0 - 0x7d0u), rd32(sp0 - 0x7ccu), rd32(sp0 - 0x7c8u), rd32(sp0 - 0x7c4u), rd32(sp0 - 0x7c0u), rd32(sp0 - 0x7bcu), rd32(sp0 - 0x7b8u), rd32(sp0 - 0x7b4u), rd32(sp0 - 0x7b0u), rd32(sp0 - 0x7acu), rd32(sp0 - 0x7a8u), rd32(sp0 - 0x7a4u), rd32(sp0 - 0x7a0u), rd32(sp0 - 0x79cu), rd32(sp0 - 0x798u), rd32(sp0 - 0x794u), rd32(sp0 - 0x790u), rd32(sp0 - 0x78cu), rd32(sp0 - 0x788u), rd32(sp0 - 0x784u), rd32(sp0 - 0x780u), rd32(sp0 - 0x77cu), rd32(sp0 - 0x778u), rd32(sp0 - 0x774u), rd32(sp0 - 0x770u), rd32(sp0 - 0x76cu), rd32(sp0 - 0x768u), rd32(sp0 - 0x764u), rd32(sp0 - 0x760u), rd32(sp0 - 0x75cu), rd32(sp0 - 0x758u), rd32(sp0 - 0x754u), rd32(sp0 - 0x750u), rd32(sp0 - 0x74cu), rd32(sp0 - 0x748u), rd32(sp0 - 0x744u), rd32(sp0 - 0x740u), rd32(sp0 - 0x73cu), rd32(sp0 - 0x738u), rd32(sp0 - 0x734u), rd32(sp0 - 0x730u), rd32(sp0 - 0x72cu), rd32(sp0 - 0x728u), rd32(sp0 - 0x724u), rd32(sp0 - 0x720u), rd32(sp0 - 0x71cu), rd32(sp0 - 0x718u), rd32(sp0 - 0x714u), rd32(sp0 - 0x710u), rd32(sp0 - 0x70cu), rd32(sp0 - 0x708u), rd32(sp0 - 0x704u), rd32(sp0 - 0x700u), rd32(sp0 - 0x6fcu), rd32(sp0 - 0x6f8u), rd32(sp0 - 0x6f4u), rd32(sp0 - 0x6f0u), rd32(sp0 - 0x6ecu), rd32(sp0 - 0x6e8u), rd32(sp0 - 0x6e4u), rd32(sp0 - 0x6e0u), rd32(sp0 - 0x6dcu), rd32(sp0 - 0x6d8u), rd32(sp0 - 0x6d4u), rd32(sp0 - 0x6d0u), rd32(sp0 - 0x6ccu), rd32(sp0 - 0x6c8u), rd32(sp0 - 0x6c4u), rd32(sp0 - 0x6c0u), rd32(sp0 - 0x6bcu), rd32(sp0 - 0x6b8u), rd32(sp0 - 0x6b4u), rd32(sp0 - 0x6b0u), rd32(sp0 - 0x6acu), rd32(sp0 - 0x6a8u), rd32(sp0 - 0x6a4u), rd32(sp0 - 0x6a0u), rd32(sp0 - 0x69cu), rd32(sp0 - 0x698u), rd32(sp0 - 0x694u), rd32(sp0 - 0x690u), rd32(sp0 - 0x68cu), rd32(sp0 - 0x688u), rd32(sp0 - 0x684u), rd32(sp0 - 0x680u), rd32(sp0 - 0x67cu), rd32(sp0 - 0x678u), rd32(sp0 - 0x674u), rd32(sp0 - 0x670u), rd32(sp0 - 0x66cu), rd32(sp0 - 0x668u), rd32(sp0 - 0x664u), rd32(sp0 - 0x660u), rd32(sp0 - 0x65cu), rd32(sp0 - 0x658u), rd32(sp0 - 0x654u), rd32(sp0 - 0x650u), rd32(sp0 - 0x64cu), rd32(sp0 - 0x648u), rd32(sp0 - 0x644u), rd32(sp0 - 0x640u), rd32(sp0 - 0x63cu), rd32(sp0 - 0x638u), rd32(sp0 - 0x634u), rd32(sp0 - 0x630u), rd32(sp0 - 0x62cu), rd32(sp0 - 0x628u), rd32(sp0 - 0x624u), rd32(sp0 - 0x620u), rd32(sp0 - 0x61cu), rd32(sp0 - 0x618u), rd32(sp0 - 0x614u), rd32(sp0 - 0x610u), rd32(sp0 - 0x60cu), rd32(sp0 - 0x608u), rd32(sp0 - 0x604u), rd32(sp0 - 0x600u), rd32(sp0 - 0x5fcu), rd32(sp0 - 0x5f8u), rd32(sp0 - 0x5f4u), rd32(sp0 - 0x5f0u), rd32(sp0 - 0x5ecu), rd32(sp0 - 0x5e8u), rd32(sp0 - 0x5e4u), rd32(sp0 - 0x5e0u), rd32(sp0 - 0x5dcu), rd32(sp0 - 0x5d8u), rd32(sp0 - 0x5d4u), rd32(sp0 - 0x5d0u), rd32(sp0 - 0x5ccu), rd32(sp0 - 0x5c8u), rd32(sp0 - 0x5c4u), rd32(sp0 - 0x5c0u), rd32(sp0 - 0x5bcu), rd32(sp0 - 0x5b8u), rd32(sp0 - 0x5b4u), rd32(sp0 - 0x5b0u), rd32(sp0 - 0x5acu), rd32(sp0 - 0x5a8u), rd32(sp0 - 0x5a4u), rd32(sp0 - 0x5a0u), rd32(sp0 - 0x59cu), rd32(sp0 - 0x598u), rd32(sp0 - 0x594u), rd32(sp0 - 0x590u), rd32(sp0 - 0x58cu), rd32(sp0 - 0x588u), rd32(sp0 - 0x584u), rd32(sp0 - 0x580u), rd32(sp0 - 0x57cu), rd32(sp0 - 0x578u), rd32(sp0 - 0x574u), rd32(sp0 - 0x570u), rd32(sp0 - 0x56cu), rd32(sp0 - 0x568u), rd32(sp0 - 0x564u), rd32(sp0 - 0x560u), rd32(sp0 - 0x55cu), rd32(sp0 - 0x558u), rd32(sp0 - 0x554u), rd32(sp0 - 0x550u), rd32(sp0 - 0x54cu), rd32(sp0 - 0x548u), rd32(sp0 - 0x544u), rd32(sp0 - 0x540u), rd32(sp0 - 0x53cu), rd32(sp0 - 0x538u), rd32(sp0 - 0x534u), rd32(sp0 - 0x530u), rd32(sp0 - 0x52cu), rd32(sp0 - 0x528u), rd32(sp0 - 0x524u), rd32(sp0 - 0x520u), rd32(sp0 - 0x51cu), rd32(sp0 - 0x518u), rd32(sp0 - 0x514u), rd32(sp0 - 0x510u), rd32(sp0 - 0x50cu), rd32(sp0 - 0x508u), rd32(sp0 - 0x504u), rd32(sp0 - 0x500u), rd32(sp0 - 0x4fcu), rd32(sp0 - 0x4f8u), rd32(sp0 - 0x4f4u), rd32(sp0 - 0x4f0u), rd32(sp0 - 0x4ecu), rd32(sp0 - 0x4e8u), rd32(sp0 - 0x4e4u), rd32(sp0 - 0x4e0u), rd32(sp0 - 0x4dcu), rd32(sp0 - 0x4d8u), rd32(sp0 - 0x4d4u), rd32(sp0 - 0x4d0u), rd32(sp0 - 0x4ccu), rd32(sp0 - 0x4c8u), rd32(sp0 - 0x4c4u), rd32(sp0 - 0x4c0u), rd32(sp0 - 0x4bcu), rd32(sp0 - 0x4b8u), rd32(sp0 - 0x4b4u), rd32(sp0 - 0x4b0u), rd32(sp0 - 0x4acu), rd32(sp0 - 0x4a8u), rd32(sp0 - 0x4a4u), rd32(sp0 - 0x4a0u), rd32(sp0 - 0x49cu), rd32(sp0 - 0x498u), rd32(sp0 - 0x494u), rd32(sp0 - 0x490u), rd32(sp0 - 0x48cu), rd32(sp0 - 0x488u), rd32(sp0 - 0x484u), rd32(sp0 - 0x480u), rd32(sp0 - 0x47cu), rd32(sp0 - 0x478u), rd32(sp0 - 0x474u), rd32(sp0 - 0x470u), rd32(sp0 - 0x46cu), rd32(sp0 - 0x468u), rd32(sp0 - 0x464u), rd32(sp0 - 0x460u), rd32(sp0 - 0x45cu), rd32(sp0 - 0x458u), rd32(sp0 - 0x454u), rd32(sp0 - 0x450u), rd32(sp0 - 0x44cu), rd32(sp0 - 0x448u), rd32(sp0 - 0x444u), rd32(sp0 - 0x440u), rd32(sp0 - 0x43cu), rd32(sp0 - 0x438u), rd32(sp0 - 0x434u), rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu), rd32(sp0 - 0x428u), rd32(sp0 - 0x424u)}, arg5, g->edx, g->eax, 2160u);
            wr32(sp0 - 0xc58u, t4);
            if ((int32_t)t4 >= 0)
            {
                eax = t4;
                edi = t4;
                loc_c58 = t4;
                goto L_101c619a;
            }
            eax = t4;
            wr32(sp0 - 0xc70u, 0x80808080u);
            wr32(sp0 - 0xc74u, COW_IMG(0x1037ce1cu));
            wr32(sp0 - 0xc78u, arg4);
            wr32(sp0 - 0xc7cu, arg3);
            ecx = arg4;
            edx = arg3;
            loc_c74 = COW_IMG(0x1037ce1cu);
            loc_c7c = arg3;
L_101c62a1: ;
            g->eax = eax;
            g->esp = sp0 - 0xc58u;
            t16 = cow_cdecl(g, COW_IMG(0x101907e0u), 9, loc_c7c, arg4, loc_c74, 0x80808080u, rd32(sp0 - 0xc6cu), rd32(sp0 - 0xc68u), rd32(sp0 - 0xc64u), rd32(sp0 - 0xc60u), 0x80808080u);
            eax = t16;
        }
    }
L_101c62a9: ;
    return eax;
L_101c619a: ;
    if ((int32_t)edi <= 0) goto L_101c62a9;
    ebx = arg3;
    ebp = 0u;
    esi = 0u;
L_101c61ab: ;
    if (rd8(ebp + sp0 - 0x41cu) != 0x7fu)
    {
        eax = (eax & 0xffffff00u) | rd8(ebp + sp0 - 0x41cu);
        wr8(esi + sp0 - 0xc54u, (uint8_t)eax);
        esi = esi + 1u;
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(ebp + sp0 - 0x41cu);
        if (rd8(ebp + sp0 - 0x41bu) != 0xffu)
        {
            eax = (eax & 0xffffff00u) | rd8(ebp + sp0 - 0x41bu);
            goto L_101c621b;
        }
        eax = (eax & 0xffffff00u) | rd8(ebp + sp0 - 0x41bu);
        if (rd8(sp0 + 0x18u) != 1u) goto L_101c622d;
        wr32(sp0 - 0xc70u, 0x80808080u);
        wr32(sp0 - 0xc74u, sp0 - 0xc54u);
        wr32(sp0 - 0xc78u, arg4);
        wr32(sp0 - 0xc7cu, ebx);
        wr8(esi + sp0 - 0xc54u, 0x7cu);
        wr8(esi + sp0 - 0xc53u, 0u);
        g->ecx = sp0 - 0xc54u;
        g->edx = arg4;
        g->esp = sp0 - 0xc58u;
        cow_cdecl(g, COW_IMG(0x101907e0u), 9, ebx, arg4, sp0 - 0xc54u, 0x80808080u, rd32(sp0 - 0xc6cu), rd32(sp0 - 0xc68u), rd32(sp0 - 0xc64u), rd32(sp0 - 0xc60u), 0x80808080u);
        t5 = g->ecx;
        t6 = g->edx;
        wr8(esi + sp0 - 0xc54u, 0u);
        wr32(sp0 - 0xc80u, sp0 - 0xc54u);
        g->esp = sp0 - 0xc6cu;
        t7 = cow_call_regs(g, COW_IMG(0x10190830u), sp0 - 0xc54u, t5, g->edx, 1, 5, sp0 - 0xc54u, rd32(sp0 - 0xc7cu), arg4, sp0 - 0xc54u, 0x80808080u);
        t8 = rd32(sp0 - 0xc58u);
        wr8(sp0 - 0xc54u, 0u);
        wr8(sp0 + 0x18u, 0u);
        eax = t7;
        ebx = ebx + t7;
        ebp = ebp + 1u;
        esi = 0u;
        edi = t8;
    }
L_101c627c: ;
    if ((int32_t)(ebp + 1u) < (int32_t)edi)
    {
        ebp = ebp + 1u;
        goto L_101c61ab;
    }
    if ((int32_t)esi <= 0) goto L_101c62a9;
    wr32(sp0 - 0xc70u, 0x80808080u);
    wr32(sp0 - 0xc74u, sp0 - 0xc54u);
    wr32(sp0 - 0xc78u, arg4);
    wr8(esi + sp0 - 0xc54u, 0u);
    wr32(sp0 - 0xc7cu, ebx);
    eax = 0x80808080u;
    ecx = sp0 - 0xc54u;
    edx = arg4;
    loc_c74 = sp0 - 0xc54u;
    loc_c7c = ebx;
    goto L_101c62a1;
L_101c621b: ;
    if ((uint8_t)eax != 0xfeu) goto L_101c6222;
    ebp = ebp + 1u;
    goto L_101c627c;
L_101c6222: ;
    if ((uint8_t)eax != 0xfcu) goto L_101c6229;
    ebp = ebp + 1u;
    goto L_101c627c;
L_101c6229: ;
    if ((uint8_t)eax != 0xfbu) goto L_101c6230;
L_101c622d: ;
    ebp = ebp + 1u;
    goto L_101c627c;
L_101c6230: ;
    wr32(sp0 - 0xc70u, 0x80808080u);
    wr32(sp0 - 0xc74u, sp0 - 0xc54u);
    wr32(sp0 - 0xc78u, arg4);
    wr32(sp0 - 0xc7cu, ebx);
    wr8(esi + sp0 - 0xc54u, 0u);
    g->eax = arg4;
    g->ecx = 0x80808080u;
    g->edx = sp0 - 0xc54u;
    g->esp = sp0 - 0xc58u;
    t9 = cow_cdecl(g, COW_IMG(0x101907e0u), 9, ebx, arg4, sp0 - 0xc54u, 0x80808080u, rd32(sp0 - 0xc6cu), rd32(sp0 - 0xc68u), rd32(sp0 - 0xc64u), rd32(sp0 - 0xc60u), 0x80808080u);
    t10 = g->ecx;
    t11 = g->edx;
    t12 = (t10 & 0xffffff00u) | rd8(ebp + sp0 - 0x41bu);
    wr32(sp0 - 0xc80u, t12);
    g->ecx = t12;
    g->esp = sp0 - 0xc7cu;
    t13 = cow_cdecl(g, COW_IMG(0x101c6790u), 1, t12);
    t14 = g->ecx;
    wr32(sp0 - 0xc5cu, t13);
    wr32(sp0 - 0xc84u, sp0 - 0xc54u);
    g->esp = sp0 - 0xc70u;
    t15 = cow_call_regs(g, COW_IMG(0x10190830u), t13, t14, g->edx, 1, 5, sp0 - 0xc54u, rd32(sp0 - 0xc80u), rd32(sp0 - 0xc7cu), arg4, sp0 - 0xc54u);
    wr8(sp0 - 0xc54u, 0u);
    eax = t15;
    ebx = ebx + t15;
    ebp = ebp + 1u;
    esi = 0u;
    goto L_101c627c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c60e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c60e0(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
