/* f_0x1015e0f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1015e0f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    t1 = rd32(rd32(COW_IMG(0x10456a28u)));
    wr32(sp0 - 4u, t1);
    if (rd8(COW_IMG(0x103722d8u)) == 0u)
    {
        eax = (rd32(COW_IMG(0x10456a28u)) & 0xffffff00u) | rd8(COW_IMG(0x103722d8u));
        ebx = in_ebx & 0xffffff00u;
        edi = in_edi;
        goto L_1015e23d;
    }
    esi = t1;
    loc_4 = t1;
    wr32(sp0 - 0x18u, in_edi);
    eax = COW_IMG(0x103722d8u);
    edx = in_edx;
    ebx = in_ebx & 0xffffff00u;
    edi = COW_IMG(0x10372300u);
L_1015e123: ;
    wr32(sp0 - 0x1cu, 0x10u);
    wr32(sp0 - 0x20u, arg1);
    wr32(sp0 - 0x24u, eax);
    g->ecx = arg1;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t2 = cow_cdecl(g, COW_IMG(0x10312980u), 5, eax, arg1, 0x10u, in_edi, in_esi);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 != 0u)
    {
        ecx = t3;
        edx = t4;
        goto L_1015e22b;
    }
    eax = t2;
    ecx = t3;
    edx = t4;
    if (esi > 0xe0u) goto L_1015e22b;
    t5 = rd32(COW_IMG(0x1015e248u) + rd8(COW_IMG(0x1015e260u) + esi) * 4u);
    edx = rd8(COW_IMG(0x1015e260u) + esi);
    switch (t5 - RD)
    {
    case 0x1015e156u: goto L_1015e156;
    case 0x1015e203u: goto L_1015e203;
    case 0x1015e215u: goto L_1015e215;
    case 0x1015e21cu: goto L_1015e21c;
    case 0x1015e223u: goto L_1015e223;
    case 0x1015e22bu: goto L_1015e22b;
    default: rt_fatal(g, COW_IMG(0x1015e14fu), "switch");
    }
    return 0;
L_1015e11f: ;
    esi = rd32(sp0 - 4u);
    goto L_1015e123;
L_1015e156: ;
    if (rd32(COW_IMG(0x104dfd98u)) == 0u) goto L_1015e22b;
    eax = rd32(COW_IMG(0x104dfd98u));
    if (rd8(self + 0xaeu) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xaeu);
        goto L_1015e223;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0xaeu);
    wr32(sp0 - 0x1cu, 0u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t6 = cow_call_regs(g, COW_IMG(0x10087070u), eax, g->ecx, g->edx, 1, 1, 0u);
    t7 = g->ecx;
    t8 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        ecx = t7;
        edx = t8;
        goto L_1015e18d;
    }
    ecx = t7;
    edx = t8;
    if ((rd8(edi) & 4u) == 0u) goto L_1015e22b;
L_1015e229: ;
    ebx = (ebx & 0xffffff00u) | 1u;
L_1015e22b: ;
    if (rd8(edi + 4u) != 0u)
    {
        eax = edi + 4u;
        edi = edi + 0x2cu;
        goto L_1015e11f;
    }
    eax = edi + 4u;
    edi = rd32(sp0 - 0x18u);
L_1015e23d: ;
    g->edi = edi;
    return (eax & 0xffffff00u) | (uint8_t)ebx;
L_1015e18d: ;
    if (!(rd8(edi) & 1u))
    {
        ecx = (ecx & 0xffffff00u) | rd8(edi);
        goto L_1015e22b;
    }
    ecx = (ecx & 0xffffff00u) | rd8(edi);
    if ((int8_t)rd32(edi - 4u) < 0)
    {
        edx = rd32(edi - 4u);
        goto L_1015e229;
    }
    edx = rd32(edi - 4u);
    if (rd32(COW_IMG(0x1057876cu)) == 0u) goto L_1015e22b;
    esi = rd32(COW_IMG(0x1057876cu));
    if (rd16(esi + 0x68u) == 1u) goto L_1015e1fc;
    eax = rd16(esi + 0x68u) - 1u;
    if (eax == 1u) goto L_1015e1f5;
    if ((edx & 0x40000u) == 0u) goto L_1015e229;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t9 = cow_thiscall(g, COW_IMG(0x10126510u), self, 0);
    t10 = g->ecx;
    t11 = g->edx;
    wr32(sp0 - 8u, t9);
    if (t9 == 0u)
    {
        ecx = t10;
        edx = t11;
        goto L_1015e229;
    }
    edx = t11;
    loc_8 = t9;
L_1015e1d0: ;
    wr32(sp0 - 0x1cu, sp0 - 8u);
    g->esp = sp0 - 0x18u;
    t12 = cow_call_regs(g, COW_IMG(0x10126550u), g->eax, g->ecx, edx, 0, 1, sp0 - 8u);
    t13 = g->edx;
    if ((rd32(t12 + 0x34u) & 0x20000u) != 0u)
    {
        eax = rd32(sp0 - 8u);
        ecx = rd32(t12 + 0x34u);
        edx = t13;
        goto L_1015e1f1;
    }
    eax = rd32(sp0 - 8u);
    ecx = rd32(t12 + 0x34u);
    edx = t13;
    if (eax != 0u) goto L_1015e1d0;
    goto L_1015e229;
L_1015e1f1: ;
    zf = eax == 0u;
L_1015e227: ;
    if (!zf) goto L_1015e22b;
    goto L_1015e229;
L_1015e1f5: ;
    if ((ecx & 0x10u) == 0u) goto L_1015e22b;
    goto L_1015e229;
L_1015e1fc: ;
    if ((ecx & 0x20u) == 0u) goto L_1015e22b;
    goto L_1015e229;
L_1015e203: ;
    if (rd8(self + 0xaeu) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(edi);
        goto L_1015e225;
    }
    eax = (eax & 0xffffff00u) | rd8(edi);
    if ((eax & 0x40u) == 0u) goto L_1015e22b;
    goto L_1015e229;
L_1015e215: ;
    if ((rd8(edi) & 8u) == 0u) goto L_1015e22b;
    goto L_1015e229;
L_1015e21c: ;
    if (!(rd8(edi) & 1u)) goto L_1015e22b;
    goto L_1015e229;
L_1015e223: ;
    eax = (eax & 0xffffff00u) | rd8(edi);
L_1015e225: ;
    zf = (uint8_t)((uint8_t)eax - 0xffu) == 0u;
    goto L_1015e227;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015e0f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1015e0f0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
