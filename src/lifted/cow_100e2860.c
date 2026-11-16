/* f_0x100e2860 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100e2860(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 4332u);

    wr32(sp0 - 0x10b4u, in_ebx);
    wr32(sp0 - 0x10b8u, in_esi);
    if (rd32(arg2 + 4u) != 0u) goto L_100e2898;
    if (rd16(arg2 + 8u) < rd32(arg2))
    {
        eax = rd16(arg2 + 8u);
        goto L_100e288d;
    }
    eax = rd16(arg2 + 8u);
    ecx = rd32(arg2);
    if (ecx < eax + 0x14u) goto L_100e2898;
    eax = eax + 0x14u;
L_100e288d: ;
    return (eax & 0xffffff00u) | 1u;
L_100e2898: ;
    if (rd32(arg2) <= 0x1cu)
    {
        eax = rd32(arg2);
        goto L_100e2979;
    }
    eax = rd32(arg2);
    wr32(sp0 - 0x10bcu, sp0 - 0x10b0u);
    t1 = rd32(arg2 + eax - 4u);
    wr32(arg1 + 0x1e84u, t1);
    g->eax = t1;
    g->ecx = sp0 - 0x10b0u;
    g->esp = sp0 - 0x10b8u;
    t2 = cow_cdecl(g, COW_IMG(0x100dde90u), 1, sp0 - 0x10b0u);
    t3 = g->ecx;
    wr32(sp0 - 0x10c0u, 0x18u);
    wr32(sp0 - 0x10c4u, arg1 + 0x1e74u);
    wr32(sp0 - 0x10c8u, sp0 - 0x10b0u);
    g->ecx = t3;
    g->edx = sp0 - 0x10b0u;
    g->esp = sp0 - 0x1034u;
    cow_bridge_indirect(g, COW_IMG(0x100ddec0u), 0u, 37u, (const uint32_t[]){sp0 - 0x10b0u, arg1 + 0x1e74u, 0x18u, sp0 - 0x10b0u, in_esi, in_ebx, rd32(sp0 - 0x10b0u), rd32(sp0 - 0x10acu), rd32(sp0 - 0x10a8u), rd32(sp0 - 0x10a4u), rd32(sp0 - 0x10a0u), rd32(sp0 - 0x109cu), rd32(sp0 - 0x1098u), rd32(sp0 - 0x1094u), rd32(sp0 - 0x1090u), rd32(sp0 - 0x108cu), rd32(sp0 - 0x1088u), rd32(sp0 - 0x1084u), rd32(sp0 - 0x1080u), rd32(sp0 - 0x107cu), rd32(sp0 - 0x1078u), rd32(sp0 - 0x1074u), rd32(sp0 - 0x1070u), rd32(sp0 - 0x106cu), rd32(sp0 - 0x1068u), rd32(sp0 - 0x1064u), rd32(sp0 - 0x1060u), rd32(sp0 - 0x105cu), rd32(sp0 - 0x1058u), rd32(sp0 - 0x1054u), rd32(sp0 - 0x1050u), rd32(sp0 - 0x104cu), rd32(sp0 - 0x1048u), rd32(sp0 - 0x1044u), rd32(sp0 - 0x1040u), rd32(sp0 - 0x103cu), rd32(sp0 - 0x1038u)}, g->ecx, g->edx, g->eax, 148u);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x10ccu, sp0 - 0x10b0u);
    g->esp = sp0 - 0x1038u;
    cow_bridge_indirect(g, COW_IMG(0x100ddf60u), 0u, 37u, (const uint32_t[]){sp0 - 0x10b0u, sp0 - 0x10b0u, arg1 + 0x1e74u, 0x18u, sp0 - 0x10b0u, in_esi, in_ebx, rd32(sp0 - 0x10b0u), rd32(sp0 - 0x10acu), rd32(sp0 - 0x10a8u), rd32(sp0 - 0x10a4u), rd32(sp0 - 0x10a0u), rd32(sp0 - 0x109cu), rd32(sp0 - 0x1098u), rd32(sp0 - 0x1094u), rd32(sp0 - 0x1090u), rd32(sp0 - 0x108cu), rd32(sp0 - 0x1088u), rd32(sp0 - 0x1084u), rd32(sp0 - 0x1080u), rd32(sp0 - 0x107cu), rd32(sp0 - 0x1078u), rd32(sp0 - 0x1074u), rd32(sp0 - 0x1070u), rd32(sp0 - 0x106cu), rd32(sp0 - 0x1068u), rd32(sp0 - 0x1064u), rd32(sp0 - 0x1060u), rd32(sp0 - 0x105cu), rd32(sp0 - 0x1058u), rd32(sp0 - 0x1054u), rd32(sp0 - 0x1050u), rd32(sp0 - 0x104cu), rd32(sp0 - 0x1048u), rd32(sp0 - 0x1044u), rd32(sp0 - 0x1040u), rd32(sp0 - 0x103cu)}, g->ecx, g->edx, g->eax, 148u);
    wr32(sp0 - 0x10d0u, 0x10u);
    wr32(sp0 - 0x10d4u, sp0 - 0x1058u);
    wr32(sp0 - 0x10d8u, 0x1048u);
    wr32(sp0 - 0x10dcu, sp0 - 0x1048u);
    g->edx = sp0 - 0x1048u;
    g->esp = sp0 - 0x10ccu;
    cow_thiscall_cdecl(g, COW_IMG(0x100dc710u), sp0 - 0x1058u, 4, sp0 - 0x1048u, 0x1048u, sp0 - 0x1058u, 0x10u);
    t6 = g->edx;
    t7 = rd32(arg2) - 0xcu;
    wr32(sp0 - 0x10e0u, t7);
    wr32(sp0 - 0x10e4u, arg2 + 8u);
    wr32(sp0 - 0x10e8u, sp0 - 0x1048u);
    g->eax = t7;
    g->esp = sp0 - 0x10d4u;
    t8 = cow_cdecl(g, COW_IMG(0x100dcf60u), 5, sp0 - 0x1048u, arg2 + 8u, t7, sp0 - 0x1048u, 0x1048u);
    if (rd16(arg2 + 8u) >= rd32(arg2))
    {
        eax = rd16(arg2 + 8u);
        goto L_100e2979;
    }
    eax = rd16(arg2 + 8u);
    ecx = rd32(arg2);
    if (ecx < eax + 0x14u)
    {
        eax = eax + 0x14u;
        goto L_100e2979;
    }
    eax = eax + 0x14u;
    wr32(sp0 - 0x10bcu, in_edi);
    wr32(sp0 - 0x10c0u, sp0 - 0x10b0u);
    g->edx = sp0 - 0x10b0u;
    g->esp = sp0 - 0x10bcu;
    cow_cdecl(g, COW_IMG(0x100dde90u), 1, sp0 - 0x10b0u);
    t9 = g->edx;
    t10 = rd32(arg2) - 0x1cu;
    wr32(sp0 - 0x10c4u, t10);
    wr32(sp0 - 0x10c8u, arg2 + 8u);
    wr32(sp0 - 0x10ccu, sp0 - 0x10b0u);
    g->eax = t10;
    g->ecx = sp0 - 0x10b0u;
    g->esp = sp0 - 0x1038u;
    t11 = cow_bridge_indirect(g, COW_IMG(0x100ddec0u), 0u, 37u, (const uint32_t[]){sp0 - 0x10b0u, arg2 + 8u, t10, sp0 - 0x10b0u, in_edi, rd32(sp0 - 0x10b8u), rd32(sp0 - 0x10b4u), rd32(sp0 - 0x10b0u), rd32(sp0 - 0x10acu), rd32(sp0 - 0x10a8u), rd32(sp0 - 0x10a4u), rd32(sp0 - 0x10a0u), rd32(sp0 - 0x109cu), rd32(sp0 - 0x1098u), rd32(sp0 - 0x1094u), rd32(sp0 - 0x1090u), rd32(sp0 - 0x108cu), rd32(sp0 - 0x1088u), rd32(sp0 - 0x1084u), rd32(sp0 - 0x1080u), rd32(sp0 - 0x107cu), rd32(sp0 - 0x1078u), rd32(sp0 - 0x1074u), rd32(sp0 - 0x1070u), rd32(sp0 - 0x106cu), rd32(sp0 - 0x1068u), rd32(sp0 - 0x1064u), rd32(sp0 - 0x1060u), rd32(sp0 - 0x105cu), rd32(sp0 - 0x1058u), rd32(sp0 - 0x1054u), rd32(sp0 - 0x1050u), rd32(sp0 - 0x104cu), rd32(sp0 - 0x1048u), rd32(sp0 - 0x1044u), rd32(sp0 - 0x1040u), rd32(sp0 - 0x103cu)}, g->ecx, g->edx, g->eax, 148u);
    t12 = g->ecx;
    wr32(sp0 - 0x10d0u, sp0 - 0x10b0u);
    g->esp = sp0 - 0x103cu;
    cow_bridge_indirect(g, COW_IMG(0x100ddf60u), 0u, 37u, (const uint32_t[]){sp0 - 0x10b0u, sp0 - 0x10b0u, arg2 + 8u, rd32(sp0 - 0x10c4u), sp0 - 0x10b0u, in_edi, rd32(sp0 - 0x10b8u), rd32(sp0 - 0x10b4u), rd32(sp0 - 0x10b0u), rd32(sp0 - 0x10acu), rd32(sp0 - 0x10a8u), rd32(sp0 - 0x10a4u), rd32(sp0 - 0x10a0u), rd32(sp0 - 0x109cu), rd32(sp0 - 0x1098u), rd32(sp0 - 0x1094u), rd32(sp0 - 0x1090u), rd32(sp0 - 0x108cu), rd32(sp0 - 0x1088u), rd32(sp0 - 0x1084u), rd32(sp0 - 0x1080u), rd32(sp0 - 0x107cu), rd32(sp0 - 0x1078u), rd32(sp0 - 0x1074u), rd32(sp0 - 0x1070u), rd32(sp0 - 0x106cu), rd32(sp0 - 0x1068u), rd32(sp0 - 0x1064u), rd32(sp0 - 0x1060u), rd32(sp0 - 0x105cu), rd32(sp0 - 0x1058u), rd32(sp0 - 0x1054u), rd32(sp0 - 0x1050u), rd32(sp0 - 0x104cu), rd32(sp0 - 0x1048u), rd32(sp0 - 0x1044u), rd32(sp0 - 0x1040u)}, g->ecx, g->edx, g->eax, 148u);
    esi = arg2 + rd32(arg2) - 0x14u;
    edi = sp0 - 0x1058u;
    ecx = 0x10u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        eax = 0u;
    }
    else
    {
        eax = -cf + 1u - cf;
    }
    if (eax != 0u) goto L_100e2979;
    wr32(arg2 + 4u, eax);
    g->ebx = rd32(sp0 - 0x10b4u);
    g->esi = rd32(sp0 - 0x10b8u);
    return (eax & 0xffffff00u) | 1u;
L_100e2979: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e2860(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e2860(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
