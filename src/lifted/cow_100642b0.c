/* f_0x100642b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_100642b0(Guest* g)
{
    unsigned af;
    unsigned cf;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x10064360u), self, 1, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    if (arg2 == 0u) goto L_10064355;
    eax = t1;
    ecx = t2;
    edx = t3;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_call_regs(g, COW_IMG(0x10064410u), eax, g->ecx, g->edx, 1, 1, arg2);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        goto L_100642ef;
    }
    ecx = t5;
    edx = t6;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t7 = cow_thiscall_cdecl(g, COW_IMG(0x10064490u), ecx, 1, arg2);
    t8 = g->edx;
    d9 = cow_take_float(g);
    cow_thiscall(g, COW_IMG(0x100643d0u), self, 2, arg1, cow_f2bits((double)(float)d9));
    return;
L_100642ef: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t10 = cow_call_regs(g, COW_IMG(0x10064440u), eax, g->ecx, g->edx, 1, 1, arg2);
    t11 = g->ecx;
    t12 = g->edx;
    if ((uint8_t)t10 == 0u)
    {
        ecx = t11;
        edx = t12;
        goto L_10064313;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
    g->ebx = self;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t13 = cow_cdecl(g, COW_IMG(0x100644a0u), 1, arg2);
    t14 = g->edx;
    cow_thiscall(g, COW_IMG(0x100643b0u), self, 2, arg1, t13);
    g->ebx = in_ebx;
    return;
L_10064313: ;
    wr32(self + 0x10u, 3u);
    edi = arg2;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    g->esp = sp0 - 4u;
    t15 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, ~ecx, in_edi, in_esi);
    wr32(self + 0x18u, t15);
    if (t15 != 0u)
    {
        eax = t15;
        ecx = arg2;
        edx = eax - arg2;
L_1006433b: ;
        t16 = rd8(ecx);
        wr8(ecx + edx, (uint8_t)t16);
        if ((uint8_t)t16 != 0u)
        {
            eax = (eax & 0xffffff00u) | t16;
            ecx = ecx + 1u;
            goto L_1006433b;
        }
    }
    if (arg3 == 5u)
    {
        wr32(self + 0x10u, 5u);
    }
L_10064355: ;
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100642b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100642b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
