/* f_0x100b0910 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b0910(Guest* g)
{
    double d10;
    double d3;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    t1 = rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u);
    if (t1 == 0u)
    {
        ecx = rd32(self + 0x20u);
        edx = t1;
        goto L_100b0962;
    }
    eax = t1;
    edx = t1;
    if (eax != 1u)
    {
        loc_4 = self;
        goto L_100b09fd;
    }
    eax = eax - 1u;
    if (rd32(COW_IMG(0x10578198u)) == 0u)
    {
        loc_4 = self;
        goto L_100b09f6;
    }
    ecx = rd32(COW_IMG(0x10578198u));
    g->eax = eax;
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x1012f100u), ecx, 1, 0u);
    if ((uint8_t)t2 != 1u)
    {
        loc_4 = self;
        goto L_100b09f6;
    }
    eax = t2;
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    wr8(self + 0x25au, (uint8_t)eax);
    return;
L_100b0962: ;
    d3 = (double)rdf32(self + rd16(self + 0x258u) * 0x20u + 0x3cu);
    if (!(d3 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (rd16(self + 0x258u) << 5u & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    }
    else
    {
        eax = (rd16(self + 0x258u) << 5u & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        g->eax = eax;
        g->esp = sp0 - 8u;
        t4 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
        t5 = rd16(self + 0x258u);
        wrf32(self + t5 * 0x20u + 0x3cu, (float)(double)(int32_t)t4);
        eax = t4;
        ecx = t5 << 5u;
    }
    t6 = rd16(self + 0x258u);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t7 = cow_stdcall(g, COW_IMG(0x10014d60u), 0);
    t8 = rd16(self + 0x258u);
    d9 = fr(g, (double)rdf32(self + t6 * 0x20u + 0x3cu) - (double)(int32_t)t7);
    wrf32(self + t8 * 0x20u + 0x3cu, (float)d9);
    d10 = (double)rdf32(self + rd16(self + 0x258u) * 0x20u + 0x3cu);
    if (!(d10 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        loc_4 = t7;
    }
    else
    {
        loc_4 = t7;
        wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 4u));
    }
L_100b09f6: ;
    wr8(self + 0x25au, 1u);
L_100b09fd: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b0910(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b0910(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
