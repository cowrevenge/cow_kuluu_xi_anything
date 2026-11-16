/* f_0x102e35f9 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102e35f9(Guest* g)
{
    double d10;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 0x1048u) != 0u)
    {
        t1 = rd32(sp0 + 0xcu);
        g->eax = in_eax;
        g->esp = sp0 - 0x18u;
        t2 = cow_thiscall(g, COW_IMG(0x102e17b2u), self, 1, t1);
        wr32(sp0 + 0xcu, t2);
    }
    g->edx = rd32(self + 0x18u) + rd32(self + 0x1050u) * arg1 + rd32(self + 0x1054u) * arg2;
    t3 = rd32(self + 0x18u);
    t4 = rd32(self + 0x1050u);
    t5 = rd32(self + 0x1054u);
    t6 = rd32(self + 0x2cu);
    g->esp = sp0 - 0x14u;
    cow_thiscall_cdecl(g, COW_IMG(0x102e2005u), t6, 3, in_edi, in_esi, rd32(sp0 - 0x18u));
    t7 = g->edx;
    if (rd32(self + 0x1058u) == 0u)
    {
        edx = t7;
    }
    else
    {
        edx = t7;
        edi = (arg1 & 3u) * 0x20u + (arg2 & 3u) * 4u + t6;
        eax = 0u;
        esi = 0u;
L_102e365c: ;
        d8 = (double)(float)(double)rdf32(edi + (eax & 3u) * 4u);
        d9 = (double)(float)fr(g, fr(g, (double)rdf32(esi + rd32(sp0 + 0xcu)) * (double)rdf32(COW_IMG(0x1032ae60u))) + (double)rdf32(edi + (eax & 3u) * 4u));
        d10 = (double)(float)fr(g, fr(g, (double)rdf32(esi + rd32(sp0 + 0xcu) + 4u) * (double)rdf32(COW_IMG(0x1032ae60u))) + d8);
        wr16(edx, (uint16_t)((uint8_t)(uint32_t)fist32(g, d9) | (uint32_t)fist32(g, d10) << 8u));
        if (eax + 1u < rd32(self + 0x1058u))
        {
            eax = eax + 1u;
            edx = edx + 2u;
            esi = esi + 0x10u;
            goto L_102e365c;
        }
        edx = edx + 2u;
    }
    g->fcw = (uint16_t)rd32(COW_IMG(0x109b1a4cu));
    g->edx = edx;
    return rd32(COW_IMG(0x109b1a4cu));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e35f9(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e35f9(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
