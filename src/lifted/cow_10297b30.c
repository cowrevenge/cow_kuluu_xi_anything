/* f_0x10297b30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=11 */
void cow_fn_10297b30(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_4;
    uint32_t sf;
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
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg10 = rd32(g->esp + 0x28u);
    const uint32_t arg11 = rd32(g->esp + 0x2cu);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 92u);

    wr32(sp0 - 0x30u, in_esi);
    t1 = rd32(sp0 + 4u) - 2u;
    wr32(sp0 - 0x28u, t1);
    if ((int32_t)(rd32(sp0 + 4u) - 2u) > 0)
    {
        loc_28 = t1;
        wr32(sp0 - 0x34u, in_ebx);
        wr32(sp0 - 0x38u, in_ebp);
        wr32(sp0 - 0x3cu, in_edi);
        t2 = arg7 + rd32(sp0 + 8u) * 4u;
        wr32(sp0 - 0x2cu, t2);
        t3 = arg5 + arg3 * 4u;
        t4 = rd32(sp0 + 8u);
        wr32(sp0 + 8u, t3);
        t5 = arg6 + t4 * 0xcu + 8u;
        wr32(sp0 + 4u, t5);
        ecx = t5;
        edx = t2;
        esi = 0u;
        loc_2c = t2;
L_10297b83: ;
        if (rd32(ecx - 8u) != 0xffffffffu)
        {
            eax = rd32(ecx - 8u);
            ebp = rd32(arg7 + eax * 4u);
        }
        else
        {
            t6 = rd32(edx) == 0u;
            ebp = t6;
        }
        if (rd32(ecx - 4u) != 0xffffffffu)
        {
            eax = rd32(ecx - 4u);
            ecx = rd32(arg7 + eax * 4u);
        }
        else
        {
            ecx = rd32(edx) == 0u;
        }
        if (rd32(rd32(sp0 + 4u)) != 0xffffffffu)
        {
            eax = rd32(rd32(sp0 + 4u));
            eax = rd32(arg7 + eax * 4u);
            edx = loc_2c;
        }
        else
        {
            eax = rd32(edx) == 0u;
        }
        wr32(sp0 - 4u, eax);
        if ((esi & 0x80000001u) == 0u)
        {
            zf = (esi & 0x80000001u) == 0u;
            sf = (int32_t)(esi & 0x80000001u) < 0;
            loc_4 = eax;
            eax = rd32(edx);
            edx = esi & 0x80000001u;
            goto L_10297c01;
        }
        zf = (esi & 0x80000001u) == 0u;
        sf = (int32_t)(esi & 0x80000001u) < 0;
        loc_4 = eax;
        eax = rd32(edx);
        edx = esi & 0x80000001u;
        if (sf)
        {
            zf = (edx - 1u | 0xfffffffeu) + 1u == 0u;
            edx = (edx - 1u | 0xfffffffeu) + 1u;
        }
        if (zf) goto L_10297c11;
L_10297bf4: ;
        if (eax == 0u) goto L_10297c37;
        if (edx != 0u) goto L_10297c43;
L_10297c9a: ;
        t11 = rd32(sp0 + 4u) + 0xcu;
        t12 = rd32(sp0 + 8u);
        wr32(sp0 + 4u, t11);
        wr32(sp0 + 8u, t12 + 4u);
        wr32(sp0 - 0x2cu, loc_2c + 4u);
        if ((int32_t)(esi + 1u) < (int32_t)loc_28)
        {
            esi = esi + 1u;
            loc_2c = loc_2c + 4u;
            goto L_10297b7b;
        }
    }
    return;
L_10297b7b: ;
    ecx = rd32(sp0 + 4u);
    edx = loc_2c;
    goto L_10297b83;
L_10297c01: ;
    if (sf)
    {
        zf = (edx - 1u | 0xfffffffeu) + 1u == 0u;
        edx = (edx - 1u | 0xfffffffeu) + 1u;
    }
    if (zf) goto L_10297bf4;
    if (arg11 != 0u) goto L_10297bf4;
L_10297c11: ;
    wr32(sp0 - 0x24u, ebp);
    wr32(sp0 - 0x20u, ecx);
    t7 = rd32(rd32(sp0 + 8u));
    wr32(sp0 - 0x18u, t7);
    t8 = rd32(arg5 + arg3 * 4u + esi * 4u + 4u);
    wr32(sp0 - 0x14u, t8);
    edx = rd32(arg5 + arg3 * 4u + esi * 4u + 8u);
L_10297c67: ;
    wr32(sp0 - 0x10u, edx);
    wr32(sp0 - 0x1cu, loc_4);
    wr32(sp0 - 0x40u, arg10);
    wr32(sp0 - 0x44u, arg9);
    wr32(sp0 - 0x48u, arg8);
    wr32(sp0 - 0x4cu, sp0 - 0x24u);
    wr32(sp0 - 0x50u, eax);
    wr32(sp0 - 0x54u, sp0 - 0x18u);
    wr32(sp0 - 0x58u, arg4);
    g->esp = sp0 - 0x3cu;
    cow_cdecl(g, COW_IMG(0x10297550u), 7, arg4, sp0 - 0x18u, eax, sp0 - 0x24u, arg8, arg9, arg10);
    goto L_10297c9a;
L_10297c37: ;
    if (edx != 0u) goto L_10297c9a;
    if (arg11 != 0u) goto L_10297c9a;
L_10297c43: ;
    wr32(sp0 - 0x24u, ecx);
    wr32(sp0 - 0x20u, ebp);
    t9 = rd32(arg5 + arg3 * 4u + esi * 4u + 8u);
    wr32(sp0 - 0x18u, t9);
    t10 = rd32(arg5 + arg3 * 4u + esi * 4u + 4u);
    wr32(sp0 - 0x14u, t10);
    edx = rd32(rd32(sp0 + 8u));
    goto L_10297c67;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10297b30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10297b30(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
