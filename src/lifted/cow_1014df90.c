/* f_0x1014df90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1014df90(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0x108u, in_edi, in_esi);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        goto L_1014e00e;
    }
    eax = t1;
    edx = t2;
    esi = t1;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10126320u), esi, 0);
    t3 = g->ecx;
    t4 = g->edx;
    g->edx = t4;
    g->esp = sp0 - 0x10u;
    t5 = cow_cdecl(g, COW_IMG(0x101284f0u), 5, arg1, esi + 4u, 0x80u, 0u, 0u);
    t6 = g->edx;
    wr8(esi + 0x106u, (uint8_t)t5);
    wr16(esi + 0x104u, (uint16_t)arg2);
    wr8(esi + 0x107u, 1u);
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x10126480u), self + 0x14u, 1, esi);
    t8 = g->ecx;
    t9 = g->edx;
    t10 = cow_cdecl(g, COW_IMG(0x1011d010u), 1, arg1);
    if ((int16_t)rd16(self + 0x34u) >= (int32_t)(t10 + 0x4cu))
    {
        eax = t10 + 0x4cu;
    }
    else
    {
        eax = t10 + 0x4cu;
        wr16(self + 0x34u, (uint16_t)eax);
    }
    return (eax & 0xffff0000u) | (uint16_t)arg2;
L_1014e00e: ;
    return eax & 0xffff0000u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014df90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014df90(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
