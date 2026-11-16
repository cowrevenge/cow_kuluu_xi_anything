/* f_0x101ba830 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_101ba830(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_ebp);
    wr32(sp0 - 0x14u, self);
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    wr32(sp0 - 0xcu, 0u);
    if ((int32_t)arg1 <= 0)
    {
        eax = 0u;
        goto L_101ba9b8;
    }
    eax = rd32(sp0 + 0x14u);
    edx = in_edx;
    ebp = rd32(sp0 + 0x14u) * 4u;
    esi = 0u;
    edi = rd32(sp0 + 8u);
    loc_18 = 0u;
    loc_c = 0u;
L_101ba86e: ;
    t1 = rd8(edi + esi);
    t2 = rd8(edi + esi + 1u);
    t3 = rd8(edi + esi + 2u);
    t4 = rd8(edi + esi + 3u);
    wr8(sp0 + 0x14u, rd8(edi + esi + 4u));
    if ((uint8_t)t1 < 7u)
    {
        ecx = (arg1 & 0xffffff00u) | t1;
        edx = esi + 5u;
        esi = esi + (uint8_t)rd32(sp0 + 0x14u) + 5u;
        loc_18 = (((t2 << 8u & 0xff00ffffu) | t3 << 0x10u) & 0xffffffu) | t4 << 0x18u | (uint8_t)t1;
        goto L_101ba8b3;
    }
    eax = (uint8_t)rd32(sp0 + 0x14u);
    ecx = (arg1 & 0xffffff00u) | t1;
    edx = esi + 5u;
    esi = esi + (uint8_t)rd32(sp0 + 0x14u) + 5u;
    loc_18 = (((t2 << 8u & 0xff00ffffu) | t3 << 0x10u) & 0xffffffu) | t4 << 0x18u | (uint8_t)t1;
    if ((uint8_t)ecx < 0x13u) goto L_101ba983;
L_101ba8b3: ;
    wr8(sp0 + 8u, rd8(edi + esi));
    wr32(sp0 - 8u, esi + 1u);
    if ((int32_t)edx >= (int32_t)arg3)
    {
        esi = esi + (uint8_t)rd32(sp0 + 8u) + 1u;
        goto L_101ba9a3;
    }
    eax = esi + 1u;
    ebx = (uint8_t)rd32(sp0 + 8u);
    loc_8 = esi + 1u;
    esi = esi + (uint8_t)rd32(sp0 + 8u) + 1u;
    if ((int32_t)eax >= (int32_t)arg3) goto L_101ba9a3;
    if ((int32_t)edx < 0) goto L_101ba9a3;
    if ((int32_t)eax < 0) goto L_101ba9a3;
    wr32(sp0 - 0x2cu, sp0 + 0x14u);
    wr32(sp0 - 0x30u, edi + edx);
    g->ebx = ebx;
    g->ecx = self;
    g->esp = sp0 - 0x28u;
    t5 = cow_stdcall(g, COW_IMG(0x101ba5d0u), 2, edi + edx, sp0 + 0x14u);
    t6 = g->ecx;
    wr32(sp0 - 4u, t5);
    if (rd8(sp0 + 8u) > 1u)
    {
        eax = t5;
        ecx = rd32(ebp + rd32(self + 0x18u));
        loc_4 = t5;
        goto L_101ba930;
    }
    eax = t5;
    ecx = rd32(ebp + rd32(self + 0x18u));
    t7 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x2cu, t7);
    t8 = (uint8_t)rd32(sp0 + 0x14u) - 1u;
    wr32(sp0 - 0x30u, t8);
    wr32(sp0 - 0x34u, eax);
    edx = t8;
    ebp = ebp + 4u;
    loc_2c = t7;
    loc_30 = t8;
    loc_34 = eax;
L_101ba99a: ;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t15 = cow_thiscall(g, COW_IMG(0x101bc7b0u), ecx, 3, loc_34, loc_30, loc_2c);
    t16 = g->edx;
    if ((uint8_t)t15 == 0u)
    {
        eax = t15;
        goto L_101ba9c4;
    }
    edx = t16;
L_101ba9a3: ;
    wr32(sp0 - 0xcu, loc_c + 1u);
    if ((int32_t)(loc_c + 1u) < (int32_t)arg1)
    {
        eax = loc_c + 1u;
        loc_c = loc_c + 1u;
        goto L_101ba86e;
    }
    eax = loc_c + 1u;
L_101ba9b8: ;
    g->ebx = in_ebx;
    return (eax & 0xffffff00u) | 1u;
L_101ba930: ;
    t9 = (uint8_t)rd32(sp0 + 0x14u) - 1u;
    wr32(sp0 - 0x10u, t9);
    t10 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x2cu, t10);
    wr32(sp0 - 0x30u, ebx - 1u);
    t11 = edi + rd32(sp0 - 8u);
    wr32(sp0 - 0x34u, t11);
    wr32(sp0 - 0x38u, t9);
    wr32(sp0 - 0x3cu, eax);
    g->edx = t9;
    g->esp = sp0 - 0x28u;
    t12 = cow_thiscall(g, COW_IMG(0x101bc7f0u), ecx, 5, eax, t9, t11, ebx - 1u, t10);
    t13 = g->edx;
    if ((uint8_t)t12 == 0u)
    {
        eax = t12;
        goto L_101ba9c4;
    }
    eax = t12;
    edx = t13;
    ebp = ebp + 4u;
    if ((uint8_t)arg4 == 0u) goto L_101ba9a3;
    t14 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x2cu, t14);
    eax = loc_10;
    ecx = rd32(ebp + rd32(rd32(sp0 - 0x14u) + 0x18u));
    edx = rd32(sp0 - 4u);
    ebp = ebp + 4u;
    loc_2c = t14;
L_101ba998: ;
    wr32(sp0 - 0x30u, eax);
    wr32(sp0 - 0x34u, edx);
    loc_30 = eax;
    loc_34 = edx;
    loc_1c = in_ebx;
    loc_20 = in_ebp;
    loc_14 = self;
    loc_24 = in_esi;
    loc_28 = in_edi;
    goto L_101ba99a;
L_101ba983: ;
    wr32(sp0 - 0x2cu, loc_18);
    ecx = rd32(ebp + rd32(self + 0x18u));
    edx = edi + edx;
    ebp = ebp + 4u;
    loc_2c = loc_18;
    goto L_101ba998;
L_101ba9c4: ;
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ba830(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ba830(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
