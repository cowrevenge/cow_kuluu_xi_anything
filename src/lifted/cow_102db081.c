/* f_0x102db081 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102db081(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 4u) == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 4u);
        if (rd32(self + 0x38u) == 0u)
        {
            ecx = self;
            edx = in_edx;
        }
        else
        {
            g->edx = in_edx;
            g->esp = sp0 - 4u;
            cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
            t1 = g->edx;
            ecx = eax;
            edx = t1;
        }
    }
    if (rd32(self + 8u) != 0u)
    {
        eax = rd32(self + 8u);
        if (rd32(self + 0x3cu) != 0u)
        {
            g->esp = sp0 - 4u;
            cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
        }
    }
    t2 = rd32(arg1 + 4u);
    wr32(self, t2);
    wr32(self + 4u, rd32(arg1));
    t3 = rd32(arg1 + 0x48u);
    wr32(self + 8u, t3);
    esi = arg1 + 0x28u;
    edi = self + 0x18u;
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t4 = rd32(arg1 + 8u);
    wr32(self + 0x30u, t4);
    t5 = rd32(arg1 + 0xcu);
    wr32(self + 0x34u, t5);
    if (rd32(self) == 0x31545844u) goto L_102db115;
    eax = rd32(self);
    if (eax == 0x32545844u) goto L_102db115;
    if (eax == 0x32595559u) goto L_102db110;
    if (eax == 0x33545844u) goto L_102db115;
    if (eax == 0x34545844u) goto L_102db115;
    if (eax == 0x35545844u) goto L_102db115;
    if (eax != 0x59565955u) goto L_102db11c;
L_102db110: ;
    wr32(self + 0x18u, rd32(self + 0x18u) & 0xfffffffeu);
L_102db11c: ;
    t6 = rd32(self + 0x20u);
    t7 = rd32(self + 0x18u);
    wr32(self + 0x38u, 0u);
    wr32(self + 0x3cu, 0u);
    wr32(self + 0xcu, t6 - t7);
    t8 = rd32(self + 0x24u) - rd32(self + 0x1cu);
    wr32(self + 0x10u, t8);
    t9 = rd32(self + 0x2cu) - rd32(self + 0x28u);
    wr32(self + 0x14u, t9);
    return 0u;
L_102db115: ;
    wr32(self + 0x18u, rd32(self + 0x18u) & 0xfffffffcu);
    wr32(self + 0x1cu, rd32(self + 0x1cu) & 0xfffffffcu);
    goto L_102db11c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102db081(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102db081(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
