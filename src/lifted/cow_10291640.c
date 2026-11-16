/* f_0x10291640 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10291640(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 132u);

    wr32(sp0 - 0x68u, sp0 - 0x40u);
    g->eax = sp0 - 0x40u;
    g->esp = sp0 - 0x64u;
    t1 = cow_cdecl(g, COW_IMG(0x1027eb10u), 1, sp0 - 0x40u);
    wr32(sp0 - 0x6cu, arg1 + 0x68u);
    wr32(sp0 - 0x70u, sp0 - 0x64u);
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x1027a9f0u), 12, sp0 - 0x64u, arg1 + 0x68u, sp0 - 0x40u, rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u));
    wr32(sp0 - 0x68u, in_ebx);
    wr32(sp0 - 0x6cu, in_esi);
    wr32(sp0 - 0x70u, in_edi);
    eax = sp0 - 0x40u;
    ecx = sp0 - 0x64u;
    edx = 3u;
L_10291672: ;
    wr32(eax, rd32(ecx));
    t2 = rd32(ecx + 4u);
    wr32(eax + 4u, t2);
    t3 = rd32(ecx + 8u);
    wr32(eax + 8u, t3);
    if (edx != 1u)
    {
        eax = eax + 0x10u;
        ecx = ecx + 0xcu;
        edx = edx - 1u;
        goto L_10291672;
    }
    wr32(sp0 - 0x74u, arg2 + 8u);
    wr32(sp0 - 0x78u, arg2 + 4u);
    wr32(sp0 - 0x7cu, arg2);
    wr32(sp0 - 0x80u, sp0 - 0x40u);
    g->edx = arg2 + 4u;
    g->esp = sp0 - 0x70u;
    t4 = cow_call_regs(g, COW_IMG(0x1027eeb0u), sp0 - 0x40u, arg2 + 8u, g->edx, 1, 4, sp0 - 0x40u, arg2, arg2 + 4u, arg2 + 8u);
    t5 = g->edx;
    g->edx = t5;
    return t4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10291640(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10291640(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
