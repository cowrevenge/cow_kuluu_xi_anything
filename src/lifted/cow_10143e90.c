/* f_0x10143e90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10143e90(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(rd32(COW_IMG(0x10578294u)) + 8u);
    g->eax = rd32(COW_IMG(0x10578294u));
    t2 = rd32(COW_IMG(0x10578294u));
    g->esp = sp0 - 0xcu;
    t3 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), in_edx, 2, t1, 0u);
    t4 = g->ecx;
    t5 = g->edx;
    if ((int32_t)arg1 <= 0) goto L_10143ef4;
    eax = t3;
    ecx = t4;
    edx = t5;
    esi = 0u;
L_10143eb4: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t6 = cow_cdecl(g, COW_IMG(0x10141c20u), 1, esi);
    t7 = g->ecx;
    t8 = g->edx;
    if ((uint16_t)t6 + 0x7400u == arg1)
    {
        eax = (uint16_t)t6 + 0x7400u;
        edx = t8;
        goto L_10143ed7;
    }
    eax = (uint16_t)t6 + 0x7400u;
    ecx = t7;
    edx = t8;
    if ((int32_t)(esi + 1u) < 12)
    {
        esi = esi + 1u;
        goto L_10143eb4;
    }
    return;
L_10143ed7: ;
    t9 = (edx & 0xffff0000u) | rd8(esi + self + 0x168u);
    t10 = rd32(self + 8u);
    g->edx = t9;
    g->esp = sp0 - 0xcu;
    t11 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, t10, g->edx, 0, 2, t9, 0u);
    t12 = g->edx;
    cow_thiscall(g, COW_IMG(0x101186a0u), t10, 0);
L_10143ef4: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10143e90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10143e90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
