/* f_0x1012c2d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1012c2d0(Guest* g)
{
    double d1;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = self;
    g->edx = in_edx;
    d1 = fr(g, (double)rdf32(self + 0x18u) * (double)rdf32(COW_IMG(0x1032b160u)));
    fpush(g, d1);
    g->esp = sp0 - 8u;
    t2 = cow_call_regs(g, COW_IMG(0x10311c6cu), in_eax, g->ecx, g->edx, 1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    g->ecx = t3;
    g->edx = t4;
    g->esp = sp0;
    t5 = cow_cdecl(g, COW_IMG(0x101c93c0u), 3, t2, in_edi, in_esi);
    t6 = g->ecx;
    t7 = g->edx;
    if ((uint8_t)arg3 != 1u)
    {
        ecx = t6;
        edi = t5;
        eax = arg1 + 0x69u;
    }
    else
    {
        ecx = t6;
        edx = t7;
        edi = t5;
        g->edx = edx;
        g->esp = sp0;
        t8 = cow_cdecl(g, COW_IMG(0x101c9550u), 3, edi, in_edi, in_esi);
        t9 = g->edx;
        t10 = (uint32_t)(int16_t)(rd16(rd32(self + 8u) + 0x3eu) - rd16(rd32(self + 8u) + 0x3au)) - t8 - (uint32_t)((int32_t)((uint32_t)(int16_t)(rd16(rd32(self + 8u) + 0x3eu) - rd16(rd32(self + 8u) + 0x3au)) - t8) >> 0x1fu);
        eax = arg1 + (uint32_t)((int32_t)t10 >> 1u);
        ecx = (uint32_t)((int32_t)t10 >> 1u);
    }
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x101c9780u), 4, eax, arg2 + 9u, edi, 0x80808080u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012c2d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1012c2d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
