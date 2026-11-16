/* f_0x101c9a30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_101c9a30(Guest* g)
{
    unsigned af;
    unsigned cf;
    double d11;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t12;
    uint32_t t13;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 68u);

    wr32(sp0 - 0x14u, in_ebx);
    if (arg3 != 0u) goto L_101c9a46;
    return (uint32_t)(int16_t)rd16(sp0 + 4u);
L_101c9a46: ;
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_edi);
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    wr32(sp0 - 0x24u, sp0 + 0xcu);
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, COW_IMG(0x101601d0u), COW_IMG(0x10621838u), 2, sp0 + 0xcu, sp0 - 0x10u);
    t1 = g->ecx;
    t2 = g->edx;
    wr32(sp0 - 0x20u, 0u);
    g->ecx = t1;
    g->edx = t2;
    t3 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 0u);
    t4 = g->ecx;
    t5 = g->edx;
    edi = arg3;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = sp0 - 0x1cu < sp0 - 0x20u;
    pf = PARITY((uint8_t)(sp0 - 0x1cu));
    af = (sp0 - 0x20u ^ sp0 - 0x1cu) >> 4u & 1u;
    zf = sp0 == 0x1cu;
    sf = (int32_t)(sp0 - 0x1cu) < 0;
    of = ((sp0 - 0x20u ^ sp0 - 0x1cu) & (sp0 - 0x1cu ^ 4u)) >> 0x1fu;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t6 = ~ecx - 1u;
    wr32(sp0 - 4u, t6);
    if ((int32_t)(~ecx - 1u) <= 0)
    {
        eax = rd32(sp0 + 4u);
        edx = t5;
    }
    else
    {
        eax = rd32(sp0 + 4u);
        ecx = t6;
        ebp = t3;
        loc_4 = t6;
        wr32(sp0 - 0x20u, in_esi);
        edi = 0u;
L_101c9a87: ;
        if ((int32_t)edi <= 0)
        {
            edx = 0u;
        }
        else
        {
            edx = rd8(arg3 + edi - 1u);
        }
        t7 = rd8(arg3 + edi);
        wr8(sp0 + 4u, (uint8_t)t7);
        if ((uint8_t)t7 != 0x85u)
        {
            ecx = (ecx & 0xffffff00u) | t7;
            if ((uint8_t)edx != 0x85u) goto L_101c9ac6;
            if ((uint8_t)ecx != 0xdau) goto L_101c9ab6;
            edx = rd32(ebp);
            esi = rd32(rd32(ebp) + 0x17cu);
L_101c9ae5: ;
            if (esi != 0u)
            {
                wr32(sp0 - 0x24u, 0u);
                wr32(sp0 - 0x28u, 0u);
                wr32(sp0 - 0x2cu, 0u);
                wr32(sp0 - 0x30u, arg4);
                t8 = rd32(sp0 - 0x10u);
                wr32(sp0 - 0x34u, t8);
                wr32(sp0 - 0x38u, arg3);
                wr32(sp0 - 0x3cu, (uint32_t)(int16_t)arg2);
                wr32(sp0 - 0x40u, (uint32_t)(int16_t)eax);
                wr32(sp0 - 8u, (uint32_t)(int16_t)eax);
                g->edx = (uint32_t)(int16_t)arg2;
                g->esp = sp0 - 0x20u;
                cow_thiscall(g, COW_IMG(0x1011fc80u), esi, 8, (uint32_t)(int16_t)eax, (uint32_t)(int16_t)arg2, arg3, t8, arg4, 0u, 0u, 0u);
                t9 = g->edx;
                t10 = (uint32_t)(int16_t)rd16(esi + 0x22u) - (uint32_t)(int16_t)rd16(esi + 0x20u) - 1u;
                wr32(sp0 - 0xcu, t10);
                g->edx = t9;
                d11 = fr(g, fr(g, (double)(int32_t)t10 * (double)rdf32(sp0 + 0xcu)) + (double)(int32_t)rd32(sp0 - 8u));
                fpush(g, d11);
                t12 = cow_call_regs(g, COW_IMG(0x10311c6cu), t10, g->ecx, g->edx, 1, 0);
                t13 = g->edx;
                eax = t12;
                edx = t13;
            }
        }
L_101c9b33: ;
        if ((int32_t)(edi + 1u) < (int32_t)loc_4)
        {
            ecx = loc_4;
            edi = edi + 1u;
            goto L_101c9a87;
        }
    }
    g->ebx = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x18u);
    g->edx = edx;
    return (uint32_t)(int16_t)eax;
L_101c9ab6: ;
    if ((uint8_t)ecx != 0xc8u) goto L_101c9ac6;
    esi = rd32(rd32(ebp) + 0x180u);
    goto L_101c9ae5;
L_101c9ac6: ;
    if ((int32_t)((uint8_t)rd32(sp0 + 4u) - 0x20u) < 0)
    {
        edx = (uint8_t)rd32(sp0 + 4u);
        goto L_101c9b33;
    }
    ecx = (uint8_t)rd32(sp0 + 4u) - 0x20u;
    edx = (uint8_t)rd32(sp0 + 4u);
    if ((int32_t)ecx > 139) goto L_101c9b33;
    edx = rd32(ebp);
    esi = rd32(ecx * 4u + rd32(ebp));
    goto L_101c9ae5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c9a30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c9a30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
