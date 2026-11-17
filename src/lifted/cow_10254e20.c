/* f_0x10254e20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10254e20(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
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

    t1 = rd8(sp0 + 4u);
    t2 = rd32(sp0 + 4u);
    wr8(self, (uint8_t)t1);
    wr32(self + 4u, 0u);
    wr32(self + 8u, 0u);
    wr32(self + 0xcu, 0u);
    wr8(self + 0x10u, (uint8_t)t1);
    wr32(self + 0x14u, 0u);
    wr32(self + 0x18u, 0u);
    wr32(self + 0x1cu, 0u);
    if (self + 0x10u == t2)
    {
        edx = in_edx;
        goto L_10254f64;
    }
    edi = t2;
    if (rd32(edi + 4u) == 0u)
    {
        eax = rd32(edi + 4u);
        goto L_10254e6b;
    }
    eax = rd32(edi + 4u);
    if ((uint32_t)((int32_t)(rd32(edi + 8u) - eax) >> 2u) != 0u)
    {
        ecx = (uint32_t)((int32_t)(rd32(edi + 8u) - eax) >> 2u);
        goto L_10254ebb;
    }
L_10254e6b: ;
    if (eax == rd32(edi + 8u)) goto L_10254e84;
    ecx = 0u;
    edx = rd32(edi + 8u);
L_10254e74: ;
    wr32(ecx, rd32(eax));
    if (eax + 4u != edx)
    {
        eax = eax + 4u;
        ecx = ecx + 4u;
        goto L_10254e74;
    }
L_10254e84: ;
    if (rd32(edi + 4u) != 0u)
    {
        eax = rd32(edi + 4u);
        goto L_10254ea0;
    }
    t23 = rd32(self + 0x14u);
    t24 = rd32(self + 0x14u);
    wr32(self + 0x18u, t23);
    g->edx = t24;
    return self;
L_10254ea0: ;
    t25 = rd32(self + 0x14u) + (uint32_t)((int32_t)(rd32(edi + 8u) - eax) >> 2u) * 4u;
    t26 = rd32(self + 0x14u);
    wr32(self + 0x18u, t25);
    g->edx = t26;
    return self;
L_10254ebb: ;
    if (ecx != 0u) goto L_10254f19;
    if (1u)
    {
        edx = 0u;
        goto L_10254ed5;
    }
    ecx = eax;
    edx = 0u;
L_10254ec7: ;
    wr32(edx, rd32(ecx));
    if (ecx + 4u != eax)
    {
        ecx = ecx + 4u;
        edx = edx + 4u;
        goto L_10254ec7;
    }
    edx = edx + 4u;
L_10254ed5: ;
    t3 = rd32(edi + 8u);
    t4 = rd32(self + 0x18u);
    t5 = rd32(edi + 8u);
    wr32(sp0 + 4u, t3);
    if (eax == t5) goto L_10254efd;
    ecx = t3;
    ebx = eax;
    ebp = t4;
L_10254ee5: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x10256530u), 2, ebp, ebx);
    t6 = g->ecx;
    t7 = g->edx;
    if (ebx + 4u != rd32(sp0 + 4u))
    {
        eax = rd32(sp0 + 4u);
        ecx = t6;
        edx = t7;
        ebx = ebx + 4u;
        ebp = ebp + 4u;
        goto L_10254ee5;
    }
    eax = rd32(sp0 + 4u);
    edx = t7;
L_10254efd: ;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t8 = cow_thiscall(g, COW_IMG(0x10255240u), edi, 0);
    t9 = t8 * 4u + rd32(self + 0x14u);
    wr32(self + 0x18u, t9);
    g->edx = t9;
    return self;
L_10254f19: ;
    g->ecx = self + 0x10u;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    cow_stdcall(g, COW_IMG(0x10255430u), 2, 0u, 0u);
    t10 = g->ecx;
    t11 = g->edx;
    t12 = rd32(self + 0x14u);
    g->eax = t12;
    t13 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t10, t11, 1, 1, t12);
    t14 = g->edx;
    g->edx = t14;
    t15 = cow_thiscall(g, COW_IMG(0x10255240u), edi, 0);
    t16 = g->edx;
    if ((int32_t)t15 >= 0)
    {
        eax = t15;
        edx = t16;
    }
    else
    {
        edx = t16;
        eax = 0u;
    }
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t17 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, eax * 4u, edx, 1, 3, eax * 4u, in_edi, in_esi);
    t18 = g->edx;
    wr32(self + 0x14u, t17);
    t19 = rd32(edi + 8u);
    t20 = rd32(edi + 4u);
    g->edx = t18;
    g->esp = sp0 - 0x14u;
    t21 = cow_stdcall(g, COW_IMG(0x10255440u), 3, t20, t19, t17);
    t22 = g->edx;
    wr32(self + 0x1cu, t21);
    wr32(self + 0x18u, t21);
    edx = t22;
L_10254f64: ;
    g->edx = edx;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10254e20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10254e20(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
