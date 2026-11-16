/* f_0x10043e50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10043e50(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
    uint32_t t1;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x10043f00u), self, 0);
    t1 = g->ecx;
    t2 = g->edx;
    wr8(self + 0x44u, 1u);
    ecx = t1;
    edx = t2;
    ebx = self + 4u;
    loc_8 = 0u;
L_10043e75: ;
    wr32(ebx + 4u, 0u);
    wr32(ebx + 0x14u, arg2);
    wr32(ebx + 0x18u, arg1);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t3 = cow_cdecl(g, COW_IMG(0x1006a560u), 1, arg2);
    t4 = g->edx;
    wr32(ebx + 0x1cu, t3);
    g->ebx = ebx;
    g->esi = arg1;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x1006b1d0u), rd32(COW_IMG(0x1047bff8u)), 1, ebx);
    t6 = g->edx;
    if (t5 == 0u)
    {
        t7 = rd32(ebx + 0x1cu) * arg1;
        t8 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
        g->edx = t7;
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu)) + 0x5cu), rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu)), 6, t8, t7, 0x208u, arg2, 0u, ebx);
        t9 = g->edx;
        edx = t9;
    }
    else
    {
        eax = t5;
        edx = t6;
        esi = eax;
        edi = ebx;
        ecx = 8u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    }
    if ((int32_t)(loc_8 + 1u) < (int8_t)rd8(self + 0x44u))
    {
        ecx = (uint32_t)(int8_t)rd8(self + 0x44u);
        ebx = ebx + 0x20u;
        loc_8 = loc_8 + 1u;
        goto L_10043e75;
    }
    eax = loc_8 + 1u;
    g->ebx = in_ebx;
    g->esi = in_esi;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10043e50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10043e50(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
