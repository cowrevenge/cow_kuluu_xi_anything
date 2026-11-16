/* f_0x100798e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100798e0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(COW_IMG(0x1057876cu)) == 0u)
    {
        ecx = rd32(COW_IMG(0x1057876cu));
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x1057876cu));
        g->esp = sp0 - 0xcu;
        cow_call_regs(g, COW_IMG(0x101597f0u), in_eax, ecx, in_edx, 1, 0);
        t1 = g->ecx;
        t2 = g->edx;
        ecx = t1;
        edx = t2;
    }
    if (rd32(COW_IMG(0x1047d490u)) == 1u)
    {
        ebx = 0u;
        esi = 0u;
        goto L_100799b0;
    }
    eax = rd32(COW_IMG(0x1047d490u)) - 1u;
    if (eax == 1u) goto L_10079961;
    eax = eax - 1u;
    if (eax != 1u) goto L_100799be;
    t3 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    g->eax = t3;
    g->edx = edx;
    t4 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    g->esp = sp0 - 0xcu;
    t5 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, t3);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 == 0u)
    {
        edx = t7;
        goto L_100799be;
    }
    ecx = t6;
    edx = t7;
    ebx = t4;
    esi = t5;
    if (esi >= 9u) goto L_100799be;
    edi = ebx;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx - 1u > 0xfu) goto L_100799be;
    if ((int8_t)rd8(rd32(rd32(COW_IMG(0x103551e0u)) + 4u)) < 65)
    {
        eax = (eax & 0xffffff00u) | rd8(rd32(rd32(COW_IMG(0x103551e0u)) + 4u));
        ecx = rd32(COW_IMG(0x103551e0u));
        edx = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
        goto L_10079957;
    }
    eax = (eax & 0xffffff00u) | rd8(rd32(rd32(COW_IMG(0x103551e0u)) + 4u));
    ecx = rd32(COW_IMG(0x103551e0u));
    edx = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    if ((int8_t)eax <= 90) goto L_100799ab;
L_10079957: ;
    if ((int8_t)eax < 97) goto L_100799be;
    if ((int8_t)eax > 122) goto L_100799be;
L_100799ab: ;
    if (esi >= 9u) goto L_100799be;
L_100799b0: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t14 = cow_cdecl(g, COW_IMG(0x100f8d30u), 2, ebx, esi);
    t15 = g->edx;
    if ((uint8_t)t14 == 1u)
    {
        edx = t15;
        goto L_100799c8;
    }
    edx = t15;
L_100799be: ;
    g->edx = edx;
    return -arg3;
L_10079961: ;
    t8 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    g->eax = rd32(COW_IMG(0x103551e0u));
    g->edx = edx;
    t9 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 0xcu;
    t10 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), t8, 1, t8);
    t11 = g->ecx;
    t12 = g->edx;
    if (t10 == 0u)
    {
        ecx = t11;
        esi = t10;
        goto L_1007997d;
    }
    ecx = t11;
    edx = t12;
    esi = t10;
    if (esi < 9u)
    {
        ebx = 0u;
        goto L_100799b0;
    }
L_1007997d: ;
    t13 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    edi = t13;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx - 1u > 0xfu)
    {
        edx = t13;
        goto L_100799be;
    }
    ecx = ~ecx - 1u;
    edx = t13;
    if ((int8_t)rd8(edx) < 65)
    {
        eax = (eax & 0xffffff00u) | rd8(edx);
        goto L_100799a1;
    }
    eax = (eax & 0xffffff00u) | rd8(edx);
    if ((int8_t)eax <= 90) goto L_100799a9;
L_100799a1: ;
    if ((int8_t)eax < 97) goto L_100799be;
    if ((int8_t)eax > 122) goto L_100799be;
L_100799a9: ;
    ebx = edx;
    goto L_100799ab;
L_100799c8: ;
    g->edx = edx;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100798e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100798e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
