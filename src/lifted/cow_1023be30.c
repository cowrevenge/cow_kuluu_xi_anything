/* f_0x1023be30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1023be30(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
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
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 1060u);

    wr32(sp0 - 0x404u, in_esi);
    if (arg1 == 0x6cu) goto L_1023be5e;
    if ((int32_t)arg1 < 0) goto L_1023be5e;
    wr32(sp0 - 0x408u, arg1 + 0xbb8u);
    g->esp = sp0 - 0x404u;
    cow_cdecl(g, COW_IMG(0x100182e0u), 1, arg1 + 0xbb8u);
    return;
L_1023be5e: ;
    g->eax = in_eax;
    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 0x404u;
    t2 = cow_thiscall(g, COW_IMG(0x100dbaa0u), t1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 != 0u)
    {
        ecx = t3;
        goto L_1023beb8;
    }
    eax = t2;
    ecx = t3;
    edx = t4;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x404u;
    t5 = cow_stdcall(g, COW_IMG(0x100f7700u), 0);
    t6 = g->ecx;
    t7 = g->edx;
    if ((uint8_t)t5 == 0u)
    {
        ecx = t6;
        goto L_1023beb8;
    }
    eax = t5;
    ecx = t6;
    edx = t7;
    wr32(sp0 - 0x408u, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x404u;
    t8 = cow_cdecl(g, COW_IMG(0x100182e0u), 1, arg1);
    t9 = g->ecx;
    t10 = g->edx;
    g->ecx = t9;
    g->edx = t10;
    t11 = cow_call_regs(g, COW_IMG(0x10018270u), t8, g->ecx, g->edx, 1, 0);
    t12 = g->ecx;
    t13 = g->edx;
    if ((uint8_t)t11 == 0u) goto L_1023bf38;
    eax = t11;
    ecx = t12;
    edx = t13;
L_1023be93: ;
    if (arg2 != 0u)
    {
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x404u;
        t17 = cow_stdcall(g, COW_IMG(0x100f7700u), 0);
        t18 = g->ecx;
        t19 = g->edx;
        eax = t17;
        ecx = t18;
        edx = t19;
    }
    else
    {
        wr32(sp0 - 0x408u, arg2);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x3fcu;
        t14 = cow_cdecl(g, COW_IMG(0x1023e4d0u), 3, arg2, rd32(sp0 - 0x404u), rd32(sp0 - 0x400u));
        t15 = g->ecx;
        t16 = g->edx;
        eax = t14;
        ecx = t15;
        edx = t16;
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x404u;
    t20 = cow_call_regs(g, COW_IMG(0x10018270u), eax, g->ecx, g->edx, 1, 0);
    t21 = g->ecx;
    t22 = g->edx;
    if ((uint8_t)t20 != 0u)
    {
        eax = t20;
        ecx = t21;
        edx = t22;
        goto L_1023be93;
    }
    g->esi = rd32(sp0 - 0x404u);
    return;
L_1023beb8: ;
    wr32(sp0 - 0x408u, in_ebx);
    wr32(sp0 - 0x40cu, in_edi);
    t23 = (arg1 ^ (uint32_t)((int32_t)arg1 >> 0x1fu)) - (uint32_t)((int32_t)arg1 >> 0x1fu);
    wr32(sp0 - 0x410u, t23);
    wr32(sp0 - 0x414u, 0u);
    wr32(sp0 - 0x418u, 7u);
    g->eax = t23;
    g->ecx = ecx;
    g->edx = (uint32_t)((int32_t)arg1 >> 0x1fu);
    g->esp = sp0 - 0x410u;
    t24 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 7u, 0u);
    t25 = g->ecx;
    t26 = g->edx;
    wr32(sp0 - 0x414u, t24);
    wr32(sp0 - 0x418u, sp0 - 0x400u);
    g->ecx = t25;
    g->edx = t26;
    g->esp = sp0 - 0x404u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x400u, t24, rd32(sp0 - 0x410u), in_edi, in_ebx);
    t27 = g->ecx;
    t28 = g->edx;
    wr32(sp0 - 0x41cu, 0x3eu);
    edi = sp0 - 0x400u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    wr32(sp0 - 0x420u, 7u);
    t29 = rd16(COW_IMG(0x10350e4cu));
    wr16(edi - 1u, (uint16_t)t29);
    g->eax = eax;
    g->ecx = (ecx & 0xffff0000u) | t29;
    g->esp = sp0 - 0x418u;
    t30 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 7u, 0x3eu);
    t31 = g->ecx;
    edi = t30;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = sp0 - 0x40cu < sp0 - 0x420u;
    pf = PARITY((uint8_t)(sp0 - 0x40cu));
    af = (sp0 - 0x420u ^ 0x14u ^ sp0 - 0x40cu) >> 4u & 1u;
    zf = sp0 == 0x40cu;
    sf = (int32_t)(sp0 - 0x40cu) < 0;
    of = ((sp0 - 0x420u ^ sp0 - 0x40cu) & (sp0 - 0x40cu ^ 0x14u)) >> 0x1fu;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t32 = edi - ~ecx;
    edi = sp0 - 0x400u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    esi = t32;
    edi = edi - 1u;
    ecx = ~ecx >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x410u, sp0 - 0x400u);
    ecx = ~ecx & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    g->esp = sp0 - 0x40cu;
    cow_thiscall(g, COW_IMG(0x1023c160u), rd32(COW_IMG(0x10668ff8u)), 1, sp0 - 0x400u);
L_1023bf38: ;
    g->esi = rd32(sp0 - 0x404u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1023be30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1023be30(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
