/* f_0x10079c10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10079c10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(COW_IMG(0x1047d358u)) & 1u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x1047d358u));
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047d4afu));
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x1047d358u));
        wr8(COW_IMG(0x1047d358u), (uint8_t)(eax | 1u));
        g->eax = (eax & 0xffffff00u) | (uint8_t)(eax | 1u);
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0;
        t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x5eu);
        t2 = g->ecx;
        t3 = g->edx;
        t4 = rd8(t1);
        wr8(COW_IMG(0x1047d4a8u), (uint8_t)t4);
        g->eax = (t1 & 0xffffff00u) | t4;
        g->ecx = t2;
        g->edx = t3;
        g->esp = sp0 - 8u;
        t5 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x5eu);
        t6 = g->ecx;
        t7 = g->edx;
        t8 = rd8(t5);
        wr8(COW_IMG(0x1047d4a9u), (uint8_t)(t8 + 0x20u));
        g->ecx = (t6 & 0xffffff00u) | (uint8_t)(t8 + 0x20u);
        g->edx = t7;
        g->esp = sp0 - 0x10u;
        t9 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x5fu);
        t10 = g->ecx;
        t11 = g->edx;
        t12 = rd8(t9);
        wr8(COW_IMG(0x1047d4aau), (uint8_t)t12);
        g->ecx = t10;
        g->edx = (t11 & 0xffffff00u) | t12;
        g->esp = sp0 - 0x18u;
        t13 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x5fu);
        t14 = g->ecx;
        t15 = g->edx;
        t16 = rd8(t13);
        wr8(COW_IMG(0x1047d4abu), (uint8_t)(t16 + 0x20u));
        g->eax = (t13 & 0xffffff00u) | (uint8_t)(t16 + 0x20u);
        g->ecx = t14;
        g->edx = t15;
        g->esp = sp0 - 0x20u;
        t17 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x60u);
        t18 = g->ecx;
        t19 = g->edx;
        t20 = rd8(t17);
        wr8(COW_IMG(0x1047d4acu), (uint8_t)t20);
        g->ecx = (t18 & 0xffffff00u) | t20;
        g->edx = t19;
        g->esp = sp0 - 0x28u;
        t21 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x60u);
        t22 = g->ecx;
        t23 = g->edx;
        t24 = rd8(t21);
        wr8(COW_IMG(0x1047d4adu), (uint8_t)(t24 + 0x20u));
        g->ecx = t22;
        g->edx = (t23 & 0xffffff00u) | (uint8_t)(t24 + 0x20u);
        g->esp = sp0 - 0x30u;
        t25 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x61u);
        t26 = g->ecx;
        t27 = g->edx;
        t28 = rd8(t25);
        wr8(COW_IMG(0x1047d4aeu), (uint8_t)t28);
        g->eax = (t25 & 0xffffff00u) | t28;
        g->ecx = t26;
        g->edx = t27;
        g->esp = sp0 - 0x38u;
        t29 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x61u);
        t30 = g->ecx;
        t31 = g->edx;
        t32 = rd8(t29);
        wr8(COW_IMG(0x1047d4afu), (uint8_t)(t32 + 0x20u));
        eax = (t29 & 0xffffff00u) | (uint8_t)(t32 + 0x20u);
        ecx = t30;
        edx = t31;
    }
    if ((uint8_t)arg1 == rd8(COW_IMG(0x1047d4a8u))) goto L_10079d36;
    edx = (edx & 0xffffff00u) | (uint8_t)arg1;
    if ((uint8_t)edx == rd8(COW_IMG(0x1047d4a9u))) goto L_10079d36;
    if ((uint8_t)edx == rd8(COW_IMG(0x1047d4aau))) goto L_10079d2f;
    if ((uint8_t)edx == rd8(COW_IMG(0x1047d4abu))) goto L_10079d2f;
    if (rd32(rd32(COW_IMG(0x10456a28u)) + 0x18u) >> 7u & 1u)
    {
        ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 0x18u) >> 7u & 1u;
        esi = rd32(COW_IMG(0x10456a28u));
        goto L_10079d1e;
    }
    ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 0x18u) >> 7u & 1u;
    esi = rd32(COW_IMG(0x10456a28u));
    if ((uint8_t)edx == rd8(COW_IMG(0x1047d4acu))) goto L_10079d17;
    if ((uint8_t)edx == rd8(COW_IMG(0x1047d4adu))) goto L_10079d17;
    if ((uint8_t)edx == rd8(COW_IMG(0x1047d4aeu))) goto L_10079d10;
    if ((uint8_t)edx != (uint8_t)eax) goto L_10079d1e;
L_10079d10: ;
    return 3u;
L_10079d17: ;
    return 2u;
L_10079d1e: ;
    if (ecx == 0u)
    {
        eax = rd32(esi + 8u);
        goto L_10079d38;
    }
    eax = rd32(esi + 8u);
    if (eax == 2u) goto L_10079d2f;
    if (eax != 3u) goto L_10079d38;
L_10079d2f: ;
    return 1u;
L_10079d36: ;
    eax = 0u;
L_10079d38: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10079c10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10079c10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
