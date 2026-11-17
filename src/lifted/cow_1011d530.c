/* f_0x1011d530 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1011d530(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    t1 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x10u, t1);
    wr32(sp0 - 0x14u, sp0 + 0xcu);
    t2 = rd32(sp0 + 4u);
    wr32(sp0 - 0x18u, t2);
    wr32(sp0 - 4u, 0u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_call_regs(g, COW_IMG(0x1011d460u), sp0 + 0xcu, g->ecx, g->edx, 1, 3, t2, sp0 + 0xcu, t1);
    t4 = g->ecx;
    t5 = g->edx;
    if ((int16_t)arg2 < (int16_t)rd16(sp0 + 0xcu))
    {
        eax = t3;
        ecx = (t4 & 0xffff0000u) | (uint16_t)arg2;
        edx = t5;
        esi = t1;
        edi = t2;
        goto L_1011d567;
    }
    eax = t3;
    return (eax & 0xffff0000u) | rd16(sp0 + 0xeu);
L_1011d567: ;
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 + 0xcu, edi);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t6 = cow_thiscall_cdecl(g, COW_IMG(0x1011d350u), ecx, 3, edi, in_ebx, in_edi);
    t7 = g->ecx;
    if (t6 == 0u)
    {
        eax = t6;
        ebp = in_ebp;
    }
    else
    {
        eax = t6;
        ecx = t7;
        ebx = t6;
        wr32(sp0 - 0x14u, in_ebp);
        wr32(sp0 + 4u, esi + 0x10u);
        loc_14 = in_ebp;
L_1011d587: ;
        wr32(sp0 - 0x18u, arg2);
        wr32(sp0 - 0x1cu, ebx);
        wr32(sp0 - 0x20u, edi);
        g->esp = sp0 - 0xcu;
        t8 = cow_call_regs(g, COW_IMG(0x1011d380u), eax, ecx, arg2, 1, 5, edi, ebx, arg2, loc_14, rd32(sp0 - 0x10u));
        t9 = g->ecx;
        if (t8 >= ebx)
        {
            eax = t8;
            ecx = t9;
            goto L_1011d604;
        }
        eax = t8;
        ebp = 0u;
L_1011d59c: ;
        if ((rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) & 0x80u) == 0u)
        {
            ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
            goto L_1011d5b5;
        }
        ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        if (ecx == 2u) goto L_1011d5b9;
        if (ecx == 3u) goto L_1011d5b9;
L_1011d5b5: ;
        if (ecx == 0u) goto L_1011d5d5;
L_1011d5b9: ;
        if ((int32_t)(eax - 1u) < 0) goto L_1011d5d5;
        edx = eax - 1u;
L_1011d5c0: ;
        if (rd8(edi + edx) == 0x20u) goto L_1011d5d2;
        ecx = (ecx & 0xffffff00u) | rd8(edi + edx);
        if ((uint8_t)ecx == 0x2du) goto L_1011d5d2;
        if ((int32_t)(edx - 1u) >= 0)
        {
            edx = edx - 1u;
            goto L_1011d5c0;
        }
L_1011d5d5: ;
        wr32(sp0 - 0x18u, arg2);
        t10 = ebx - (eax + ebp);
        wr32(sp0 - 0x1cu, t10);
        t11 = eax + ebp + rd32(sp0 + 0xcu);
        wr32(sp0 - 0x20u, t11);
        t12 = rd32(sp0 - 4u) + 0x10u;
        wr32(sp0 - 4u, t12);
        t13 = rd32(sp0 + 0xcu);
        g->esp = sp0 - 0xcu;
        t14 = cow_call_regs(g, COW_IMG(0x1011d380u), t13, arg2, t12, 1, 5, t11, t10, arg2, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
        t15 = g->ecx;
        if (t14 < t10)
        {
            ebp = eax + ebp;
            eax = t14;
            edi = t11;
            goto L_1011d59c;
        }
        eax = t14;
        ecx = t15;
        edi = rd32(sp0 + 0xcu);
L_1011d604: ;
        wr32(sp0 - 0x18u, ebx + edi);
        t16 = rd32(sp0 + 4u) + rd32(sp0 - 4u);
        wr32(sp0 - 4u, t16);
        t17 = rd32(sp0 + 4u);
        wr32(sp0 + 0xcu, ebx + edi);
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t18 = cow_thiscall_cdecl(g, COW_IMG(0x1011d350u), ecx, 3, ebx + edi, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
        t19 = g->ecx;
        if (t18 != 0u)
        {
            eax = t18;
            ecx = t19;
            edi = ebx + edi;
            ebx = t18;
            loc_14 = rd32(sp0 - 0x14u);
            goto L_1011d587;
        }
        eax = t18;
        ebp = rd32(sp0 - 0x14u);
    }
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->ebp = ebp;
    return (eax & 0xffff0000u) | rd16(sp0 - 4u);
L_1011d5d2: ;
    eax = edx + 1u;
    goto L_1011d5d5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011d530(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1011d530(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
