/* f_0x102e517c - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102e517c(Guest* g)
{
    double d1;
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 0x18u) + rd32(self + 0x1050u) * arg1 + rd32(self + 0x1054u) * arg2 >= rd32(self + 0x18u) + rd32(self + 0x1058u) * 2u + rd32(self + 0x1050u) * arg1 + rd32(self + 0x1054u) * arg2)
    {
        eax = rd32(self + 0x18u) + rd32(self + 0x1050u) * arg1 + rd32(self + 0x1054u) * arg2;
        edx = rd32(sp0 + 0xcu);
    }
    else
    {
        eax = rd32(self + 0x18u) + rd32(self + 0x1050u) * arg1 + rd32(self + 0x1054u) * arg2;
        edx = rd32(sp0 + 0xcu);
        esi = rd32(self + 0x18u) + rd32(self + 0x1058u) * 2u + rd32(self + 0x1050u) * arg1 + rd32(self + 0x1054u) * arg2;
L_102e51aa: ;
        wr32(sp0 + 0xcu, rd16(eax));
        d1 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x10329e9cu)));
        wrf32(edx + 8u, (float)d1);
        wrf32(edx + 4u, (float)d1);
        wrf32(edx, (float)d1);
        wrf32(edx + 0xcu, (float)1.0);
        if (eax + 2u < esi)
        {
            eax = eax + 2u;
            edx = edx + 0x10u;
            goto L_102e51aa;
        }
        eax = eax + 2u;
        edx = edx + 0x10u;
    }
    if (rd32(self + 0x10u) != 0u)
    {
        t2 = edx - (rd32(self + 0x1058u) << 4u);
        g->eax = rd32(self + 0x1058u) << 4u;
        g->edx = t2;
        t3 = rd32(self + 0x1058u);
        g->esp = sp0 - 4u;
        t4 = cow_thiscall(g, COW_IMG(0x102e23f6u), self, 1, t2);
        t5 = g->edx;
        eax = t4;
        edx = t5;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e517c(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e517c(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
