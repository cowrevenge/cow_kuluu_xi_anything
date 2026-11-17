/* f_0x100564f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100564f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 76u);

    wr32(sp0 - 0x34u, in_esi);
    if ((int32_t)((uint32_t)(int8_t)rd8(self + 0x1b5u) - 1u) <= 1)
    {
        eax = (uint32_t)(int8_t)rd8(self + 0x1b5u) - 1u;
        edx = in_edx;
        x0 = (double)rdf32(self + 0x194u);
    }
    else
    {
        eax = (uint32_t)(int8_t)rd8(self + 0x1b5u) - 1u;
        x0 = (double)rdf32(self + 0x194u);
        ecx = self + 0x198u;
        edx = eax - 1u;
L_10056512: ;
        if (!(x0 < (double)rdf32(ecx)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(ecx), 1u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(ecx), 1u);
            x0 = (double)rdf32(ecx);
        }
        if (edx != 1u)
        {
            ecx = ecx + 4u;
            edx = edx - 1u;
            goto L_10056512;
        }
        edx = edx - 1u;
    }
    wr32(sp0 - 0x28u, 0u);
    wrf32(sp0 - 0x2cu, (float)(double)(float)-x0);
    wrf32(sp0 - 0x30u, (float)(double)(float)-x0);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x10u, 0u);
    wrf32(sp0 - 0x24u, (float)(double)(float)x0);
    wr32(sp0 - 4u, 0u);
    wrf32(sp0 - 0x20u, (float)(double)(float)-x0);
    wrf32(sp0 - 0x18u, (float)(double)(float)-x0);
    wrf32(sp0 - 0x14u, (float)(double)(float)x0);
    wrf32(sp0 - 0xcu, (float)(double)(float)x0);
    wrf32(sp0 - 8u, (float)(double)(float)x0);
    g->esp = sp0 - 0xcu;
    cow_thiscall_cdecl(g, COW_IMG(0x10045d40u), self, 10, in_esi, cow_f2bits((double)(float)-x0), cow_f2bits((double)(float)-x0), 0u, cow_f2bits((double)(float)x0), cow_f2bits((double)(float)-x0), 0u, cow_f2bits((double)(float)-x0), cow_f2bits((double)(float)x0), 0u);
    wr32(sp0 - 0x38u, self + 0xa0u);
    wr32(sp0 - 0x3cu, 4u);
    wr32(sp0 - 0x40u, 0xcu);
    wr32(sp0 - 0x44u, sp0 - 0x30u);
    wr32(sp0 - 0x48u, COW_IMG(0x1047bbc8u));
    g->eax = rd32(rd32(COW_IMG(0x1047cf7cu)));
    g->edx = sp0 - 0x30u;
    t1 = rd32(rd32(COW_IMG(0x1047cf7cu)));
    g->esp = sp0 - 0x34u;
    t2 = cow_thiscall(g, rd32(t1 + 0x90u), rd32(COW_IMG(0x1047cf7cu)), 5, COW_IMG(0x1047bbc8u), sp0 - 0x30u, 0xcu, 4u, self + 0xa0u);
    t3 = g->edx;
    g->edx = t3;
    return t2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100564f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100564f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
