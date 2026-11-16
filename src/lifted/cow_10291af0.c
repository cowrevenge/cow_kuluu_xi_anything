/* f_0x10291af0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10291af0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 148u);

    wr32(sp0 - 0x68u, in_ebx);
    wr32(sp0 - 0x6cu, in_ebp);
    wr32(sp0 - 0x70u, in_esi);
    wr32(sp0 - 0x74u, in_edi);
    t1 = rd32(arg1 + 0x64u);
    wr32(sp0 - 0x78u, t1);
    t2 = rd32(arg1 + 0x60u);
    wr32(sp0 - 0x7cu, t2);
    t3 = rd32(arg1 + 0x5cu);
    wr32(sp0 - 0x80u, t3);
    wr32(sp0 - 0x84u, arg1 + 0x1cu);
    g->eax = arg1 + 0x1cu;
    g->ecx = t3;
    g->esp = sp0 - 0x74u;
    t4 = cow_cdecl(g, COW_IMG(0x10280670u), 4, arg1 + 0x1cu, t3, t2, t1);
    t5 = g->ecx;
    wr32(sp0 - 0x88u, sp0 - 0x40u);
    g->edx = sp0 - 0x40u;
    g->esp = sp0 - 0x84u;
    cow_cdecl(g, COW_IMG(0x1027eb10u), 1, sp0 - 0x40u);
    t6 = g->edx;
    wr32(sp0 - 0x8cu, arg1 + 0x68u);
    wr32(sp0 - 0x90u, sp0 - 0x64u);
    g->esp = sp0 - 0x60u;
    cow_cdecl(g, COW_IMG(0x1027a9f0u), 12, sp0 - 0x64u, arg1 + 0x68u, sp0 - 0x40u, arg1 + 0x1cu, rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), in_edi, in_esi, in_ebp, in_ebx, rd32(sp0 - 0x64u));
    eax = sp0 - 0x40u;
    ecx = sp0 - 0x64u;
    edx = 3u;
L_10291b38: ;
    wr32(eax, rd32(ecx));
    t7 = rd32(ecx + 4u);
    wr32(eax + 4u, t7);
    t8 = rd32(ecx + 8u);
    wr32(eax + 8u, t8);
    if (edx != 1u)
    {
        eax = eax + 0x10u;
        ecx = ecx + 0xcu;
        edx = edx - 1u;
        goto L_10291b38;
    }
    eax = eax + 0x10u;
    ecx = ecx + 0xcu;
    wr32(sp0 - 0x78u, sp0 - 0x40u);
    wr32(sp0 - 0x7cu, arg1 + 0x1cu);
    g->esp = sp0 - 0x74u;
    cow_cdecl(g, COW_IMG(0x10280380u), 2, arg1 + 0x1cu, sp0 - 0x40u);
    t9 = rd32(arg1 + 0x80u);
    wr32(sp0 - 0x80u, t9);
    t10 = rd32(arg1 + 0x7cu);
    wr32(sp0 - 0x84u, t10);
    t11 = rd32(arg1 + 0x78u);
    wr32(sp0 - 0x88u, t11);
    wr32(sp0 - 0x8cu, arg1 + 0x1cu);
    g->eax = t9;
    g->edx = t11;
    g->esp = sp0 - 0x7cu;
    t12 = cow_cdecl(g, COW_IMG(0x102806d0u), 4, arg1 + 0x1cu, t11, t10, t9);
    t13 = g->edx;
    g->edx = t13;
    return t12;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10291af0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10291af0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
