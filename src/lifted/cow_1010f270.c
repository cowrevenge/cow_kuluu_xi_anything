/* f_0x1010f270 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1010f270(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    wr32(sp0 - 0x18u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x101094d0u), in_eax, arg1, g->edx, 0, 1, 0u);
    t1 = g->edx;
    edx = t1;
    ebx = 0u;
    esi = rd32(self + 0x34u);
L_1010f28a: ;
    if (rd32(esi + 4u) == 0u) goto L_1010f2e6;
    if (rd32(esi + 8u) == 0u) goto L_1010f2e6;
    eax = rd32(esi + 8u);
    if ((uint16_t)ebx != 0u)
    {
        wr32(sp0 - 0x18u, COW_IMG(0x1036bf6cu));
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        cow_thiscall(g, COW_IMG(0x101093b0u), arg1, 1, COW_IMG(0x1036bf6cu));
        t2 = g->edx;
        edx = t2;
    }
    t3 = rd32(rd32(rd32(esi) + 4u) + 4u);
    wr32(sp0 - 0x18u, t3);
    g->ebx = ebx;
    g->eax = t3;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t4 = cow_thiscall(g, COW_IMG(0x10109160u), sp0 - 8u, 1, t3);
    t5 = g->edx;
    if (rd32(t4 + 4u) == 0u)
    {
        edx = t5;
        eax = 0u;
    }
    else
    {
        eax = rd32(t4 + 4u);
        edx = t5;
        eax = rd32(eax + 4u);
    }
    wr32(sp0 - 0x18u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t6 = cow_thiscall(g, COW_IMG(0x101093b0u), arg1, 1, eax);
    t7 = g->edx;
    g->edx = t7;
    cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 8u, 0);
    t8 = g->edx;
    if (rd32(esi + 8u) == 0u)
    {
        edx = t8;
    }
    else
    {
        eax = rd32(esi + 8u);
        edx = t8;
        esi = eax;
    }
    ebx = ebx + 1u;
    goto L_1010f28a;
L_1010f2e6: ;
    g->ebx = in_ebx;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010f270(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1010f270(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
