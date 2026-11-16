/* f_0x100dd6c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_100dd6c0(Guest* g)
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 1504u);

    wr32(sp0 - 0x5bcu, in_ebx);
    wr32(sp0 - 0x5c0u, in_ebp);
    wr32(sp0 - 0x5c4u, in_esi);
    wr32(sp0 - 0x5c8u, in_edi);
    if (arg2 >= arg6) goto L_100dd6e7;
    return 0xffffffffu;
L_100dd6e7: ;
    if (arg6 <= 0x550u) goto L_100dd6fc;
    return 0xffffffffu;
L_100dd6fc: ;
    if (arg6 > 0x2cu) goto L_100dd70f;
    return 0xffffffffu;
L_100dd70f: ;
    esi = arg5;
    edi = sp0 - 0x550u;
    ecx = arg6 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = arg6 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    if (arg3 == 0u)
    {
        eax = arg3;
    }
    else
    {
        wr32(sp0 - 0x5ccu, arg6 - 0x1cu);
        wr32(sp0 - 0x5d0u, sp0 - 0x534u);
        wr32(sp0 - 0x5d4u, arg3);
        g->eax = arg3;
        g->ecx = sp0 - 0x534u;
        g->esp = sp0 - 0x5c0u;
        t1 = cow_cdecl(g, COW_IMG(0x100dcf60u), 5, arg3, sp0 - 0x534u, arg6 - 0x1cu, in_edi, in_esi);
        t2 = g->ecx;
        eax = t1;
        ecx = t2;
    }
    wr32(sp0 - 0x5ccu, sp0 - 0x5b8u);
    g->edx = sp0 - 0x5b8u;
    g->esp = sp0 - 0x5c8u;
    cow_cdecl(g, COW_IMG(0x100dde90u), 1, sp0 - 0x5b8u);
    t3 = g->edx;
    wr32(sp0 - 0x5d0u, arg6 - 0x2cu);
    wr32(sp0 - 0x5d4u, sp0 - 0x534u);
    wr32(sp0 - 0x5d8u, sp0 - 0x5b8u);
    g->eax = sp0 - 0x534u;
    g->ecx = sp0 - 0x5b8u;
    g->esp = sp0 - 0x544u;
    t4 = cow_bridge_indirect(g, COW_IMG(0x100ddec0u), 0u, 37u, (const uint32_t[]){sp0 - 0x5b8u, sp0 - 0x534u, arg6 - 0x2cu, sp0 - 0x5b8u, in_edi, in_esi, in_ebp, in_ebx, rd32(sp0 - 0x5b8u), rd32(sp0 - 0x5b4u), rd32(sp0 - 0x5b0u), rd32(sp0 - 0x5acu), rd32(sp0 - 0x5a8u), rd32(sp0 - 0x5a4u), rd32(sp0 - 0x5a0u), rd32(sp0 - 0x59cu), rd32(sp0 - 0x598u), rd32(sp0 - 0x594u), rd32(sp0 - 0x590u), rd32(sp0 - 0x58cu), rd32(sp0 - 0x588u), rd32(sp0 - 0x584u), rd32(sp0 - 0x580u), rd32(sp0 - 0x57cu), rd32(sp0 - 0x578u), rd32(sp0 - 0x574u), rd32(sp0 - 0x570u), rd32(sp0 - 0x56cu), rd32(sp0 - 0x568u), rd32(sp0 - 0x564u), rd32(sp0 - 0x560u), rd32(sp0 - 0x55cu), rd32(sp0 - 0x558u), rd32(sp0 - 0x554u), rd32(sp0 - 0x550u), rd32(sp0 - 0x54cu), rd32(sp0 - 0x548u)}, g->ecx, g->edx, g->eax, 148u);
    t5 = g->ecx;
    wr32(sp0 - 0x5dcu, sp0 - 0x5b8u);
    g->esp = sp0 - 0x548u;
    cow_bridge_indirect(g, COW_IMG(0x100ddf60u), 0u, 37u, (const uint32_t[]){sp0 - 0x5b8u, sp0 - 0x5b8u, sp0 - 0x534u, arg6 - 0x2cu, sp0 - 0x5b8u, in_edi, in_esi, in_ebp, in_ebx, rd32(sp0 - 0x5b8u), rd32(sp0 - 0x5b4u), rd32(sp0 - 0x5b0u), rd32(sp0 - 0x5acu), rd32(sp0 - 0x5a8u), rd32(sp0 - 0x5a4u), rd32(sp0 - 0x5a0u), rd32(sp0 - 0x59cu), rd32(sp0 - 0x598u), rd32(sp0 - 0x594u), rd32(sp0 - 0x590u), rd32(sp0 - 0x58cu), rd32(sp0 - 0x588u), rd32(sp0 - 0x584u), rd32(sp0 - 0x580u), rd32(sp0 - 0x57cu), rd32(sp0 - 0x578u), rd32(sp0 - 0x574u), rd32(sp0 - 0x570u), rd32(sp0 - 0x56cu), rd32(sp0 - 0x568u), rd32(sp0 - 0x564u), rd32(sp0 - 0x560u), rd32(sp0 - 0x55cu), rd32(sp0 - 0x558u), rd32(sp0 - 0x554u), rd32(sp0 - 0x550u), rd32(sp0 - 0x54cu)}, g->ecx, g->edx, g->eax, 148u);
    esi = sp0 - 0x560u;
    edi = arg6 + sp0 - 0x560u;
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint32_t a = rd32(esi), b = rd32(edi), r = (uint32_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 31 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 31) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; if (!zf) break; }
    if (zf) goto L_100dd798;
    g->ebx = rd32(sp0 - 0x5bcu);
    g->esi = rd32(sp0 - 0x5c4u);
    g->edi = rd32(sp0 - 0x5c8u);
    g->ebp = rd32(sp0 - 0x5c0u);
    return 0u;
L_100dd798: ;
    esi = sp0 - 0x550u;
    edi = arg1;
    ecx = 7u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x5ccu, arg4);
    wr32(sp0 - 0x5d0u, arg2 - 0x1cu);
    wr32(sp0 - 0x5d4u, arg1 + 0x1cu);
    t6 = rd32(arg6 + sp0 - 0x564u);
    wr32(sp0 - 0x5d8u, t6);
    wr32(sp0 - 0x5dcu, sp0 - 0x534u);
    g->eax = arg1 + 0x1cu;
    g->esp = sp0 - 0x5b8u;
    t7 = cow_cdecl(g, COW_IMG(0x100df5d0u), 9, sp0 - 0x534u, t6, arg1 + 0x1cu, arg2 - 0x1cu, arg4, rd32(sp0 - 0x5c8u), rd32(sp0 - 0x5c4u), rd32(sp0 - 0x5c0u), rd32(sp0 - 0x5bcu));
    if ((int32_t)t7 >= 0)
    {
        eax = t7;
        goto L_100dd7e6;
    }
    eax = t7;
    g->ebx = rd32(sp0 - 0x5bcu);
    g->esi = rd32(sp0 - 0x5c4u);
    g->edi = rd32(sp0 - 0x5c8u);
    g->ebp = rd32(sp0 - 0x5c0u);
    return 0xffffffffu;
L_100dd7e6: ;
    g->ebx = rd32(sp0 - 0x5bcu);
    g->esi = rd32(sp0 - 0x5c4u);
    g->edi = rd32(sp0 - 0x5c8u);
    g->ebp = rd32(sp0 - 0x5c0u);
    return eax + 0x1cu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100dd6c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100dd6c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
