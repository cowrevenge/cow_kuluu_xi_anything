/* f_0x100c2e20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=7 */
uint32_t cow_fn_100c2e20(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    wr32(self, 0u);
    wr8(self + 4u, 0u);
    wr8(self + 0xbfdu, (uint8_t)arg2);
    wr16(self + 0xc0cu, rd16(COW_IMG(0x104804ccu)));
    t1 = rd16(COW_IMG(0x10482f1au));
    wr16(self + 0xc0eu, (uint16_t)t1);
    esi = arg1;
    edi = self + 0x621u;
    ecx = 0x177u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->ecx = ecx;
    g->esp = sp0 - 0xcu;
    t2 = cow_call_regs(g, COW_IMG(0x10086fc0u), (uint16_t)arg3, g->ecx, g->edx, 1, 1, (uint16_t)arg3);
    t3 = g->ecx;
    if ((uint8_t)t2 != 1u)
    {
        eax = t2;
        ecx = t3;
        t4 = rd16(COW_IMG(0x10485f7au));
        wr16(self + 0xbfeu, (uint16_t)t4);
        ecx = (ecx & 0xffff0000u) | t4;
    }
    else
    {
        eax = t2;
        ecx = t3;
        wr16(self + 0xbfeu, (uint16_t)arg3);
    }
    g->edx = (uint16_t)arg4;
    g->esp = sp0 - 0xcu;
    t5 = cow_call_regs(g, COW_IMG(0x10086fc0u), eax, g->ecx, g->edx, 1, 1, (uint16_t)arg4);
    t6 = g->edx;
    if ((uint8_t)t5 != 1u)
    {
        eax = t5;
        edx = t6;
        wr16(self + 0xc00u, rd16(COW_IMG(0x10485f7au)));
    }
    else
    {
        edx = t6;
        wr16(self + 0xc00u, (uint16_t)arg4);
    }
    if (arg5 != 0u)
    {
        g->esp = sp0 - 0xcu;
        cow_call_regs(g, COW_IMG(0x10312090u), arg5, g->ecx, g->edx, 1, 3, self + 0xc10u, arg5, 0x40u);
    }
    else
    {
        wr8(self + 0xc10u, (uint8_t)arg5);
    }
    wr32(self + 0xc08u, arg7);
    wr32(self + 0xc04u, arg6);
    eax = COW_IMG(0x10487020u);
    ecx = self + 0xc50u;
L_100c2f06: ;
    wr32(ecx, rd32(eax));
    if ((int32_t)(eax + 4u) < (int32_t)COW_IMG(0x10487034u))
    {
        eax = eax + 4u;
        ecx = ecx + 4u;
        goto L_100c2f06;
    }
    eax = COW_IMG(0x10488800u);
    ecx = self + 0xc64u;
L_100c2f22: ;
    wr32(ecx, rd32(eax));
    if ((int32_t)(eax + 4u) < (int32_t)COW_IMG(0x10488820u))
    {
        eax = eax + 4u;
        ecx = ecx + 4u;
        goto L_100c2f22;
    }
    eax = COW_IMG(0x10488980u);
    ecx = self + 0xc84u;
L_100c2f3e: ;
    wr32(ecx, rd32(eax));
    if ((int32_t)(eax + 4u) < (int32_t)COW_IMG(0x10488a00u))
    {
        eax = eax + 4u;
        ecx = ecx + 4u;
        goto L_100c2f3e;
    }
    eax = COW_IMG(0x10488d08u);
    edx = self + 0xd04u;
L_100c2f5a: ;
    esi = eax;
    edi = edx;
    ecx = 0x40u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if ((int32_t)(eax + 0x100u) < (int32_t)COW_IMG(0x10489108u))
    {
        eax = eax + 0x100u;
        edx = edx + 0x100u;
        goto L_100c2f5a;
    }
    edx = edx + 0x100u;
    esi = COW_IMG(0x104886f8u);
    edi = self + 0x1104u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    esi = COW_IMG(0x10488108u);
    edi = self + 0x1204u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->edx = edx;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100c2e20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100c2e20(g);
    g->esp = sp0;
    rt_return(g, r, 28u);
}
/* COW_ADAPTER END */
