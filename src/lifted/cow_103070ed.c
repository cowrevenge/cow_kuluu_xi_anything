/* f_0x103070ed - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_103070ed(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 1080u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, 0u);
    t1 = (uint32_t)((int32_t)(arg1 * 2u + 0x18u) >> 1u);
    wr32(sp0 - 0x1cu, t1);
    wr32(sp0 - 0x430u, in_ebx);
    t2 = (uint32_t)((int32_t)(in_edi * 2u + 0x1cu) >> 1u);
    wr32(sp0 - 0x24u, t2);
    wr32(sp0 - 0x434u, in_esi);
    t3 = rd32(in_eax + 0x70u);
    wr32(sp0 - 0x10u, t3);
    t4 = (uint32_t)((int32_t)(arg2 * 2u + 0x18u) >> 1u);
    wr32(sp0 - 0x28u, t4);
    wr32(sp0 - 0xcu, 0x7fffffffu);
    if ((int32_t)rd32(in_eax + 0x70u) <= 0)
    {
        loc_10 = t3;
        loc_c = 0x7fffffffu;
    }
    else
    {
        loc_1c = t1;
        loc_24 = t2;
        loc_10 = t3;
        loc_28 = t4;
        t5 = rd32(rd32(in_eax + 0x74u));
        wr32(sp0 - 0x2cu, t5);
        t6 = rd32(rd32(in_eax + 0x74u) + 4u);
        wr32(sp0 - 0x14u, t6);
        t7 = rd32(rd32(in_eax + 0x74u) + 8u);
        wr32(sp0 - 0x18u, t7);
        loc_8 = 0u;
        loc_c = 0x7fffffffu;
        loc_2c = t5;
        loc_14 = t6;
        loc_18 = t7;
L_10307146: ;
        if ((int32_t)rd8(loc_2c + loc_8) >= (int32_t)arg1)
        {
            eax = rd8(loc_2c + loc_8);
            goto L_10307162;
        }
        eax = rd8(loc_2c + loc_8);
        esi = (eax * 2u - arg1 * 2u) * (eax * 2u - arg1 * 2u);
L_103071a5: ;
        eax = eax - (arg1 + 0x18u);
L_10307171: ;
        if ((int32_t)rd8(loc_14 + loc_8) >= (int32_t)in_edi)
        {
            ecx = (eax << 1u) * (eax << 1u);
            eax = rd8(loc_14 + loc_8);
            if ((int32_t)eax <= (int32_t)(in_edi + 0x1cu)) goto L_103071f1;
            t9 = eax * 3u - in_edi * 3u - 0x54u;
            esi = esi + t9 * t9;
L_103071c4: ;
            eax = eax - in_edi;
        }
        else
        {
            ecx = (eax << 1u) * (eax << 1u);
            eax = rd8(loc_14 + loc_8);
            t8 = eax * 3u - in_edi * 3u;
            eax = eax - (in_edi + 0x1cu);
            esi = esi + t8 * t8;
        }
L_103071c6: ;
        if ((int32_t)rd8(loc_18 + loc_8) >= (int32_t)arg2)
        {
            ecx = ecx + eax * 3u * eax * 3u;
            eax = rd8(loc_18 + loc_8);
            goto L_103071fa;
        }
        ecx = ecx + eax * 3u * eax * 3u;
        eax = rd8(loc_18 + loc_8);
        esi = esi + (eax - arg2) * (eax - arg2);
L_10307269: ;
        eax = eax - (arg2 + 0x18u);
L_10307215: ;
        wr32(loc_8 * 4u + sp0 - 0x42cu, esi);
        if ((int32_t)(ecx + eax * eax) >= (int32_t)loc_c)
        {
            eax = loc_8;
        }
        else
        {
            ecx = ecx + eax * eax;
            eax = loc_8;
            wr32(sp0 - 0xcu, ecx);
            loc_c = ecx;
        }
        wr32(sp0 - 8u, eax + 1u);
        if ((int32_t)(eax + 1u) < (int32_t)loc_10)
        {
            loc_8 = eax + 1u;
            goto L_10307146;
        }
    }
    if ((int32_t)loc_10 <= 0) goto L_10307262;
    eax = 0u;
    ecx = 0u;
L_10307249: ;
    if ((int32_t)rd32(ecx * 4u + sp0 - 0x42cu) <= (int32_t)loc_c)
    {
        wr8(arg3 + eax, (uint8_t)ecx);
        eax = eax + 1u;
    }
    if ((int32_t)(ecx + 1u) < (int32_t)loc_10)
    {
        ecx = ecx + 1u;
        goto L_10307249;
    }
L_10307262: ;
    return;
L_10307162: ;
    if ((int32_t)eax <= (int32_t)(arg1 + 0x18u)) goto L_1030719e;
    esi = (eax * 2u - arg1 * 2u - 0x30u) * (eax * 2u - arg1 * 2u - 0x30u);
L_1030716f: ;
    eax = eax - arg1;
    goto L_10307171;
L_1030719e: ;
    if ((int32_t)eax > (int32_t)loc_1c)
    {
        esi = 0u;
        goto L_1030716f;
    }
    esi = 0u;
    goto L_103071a5;
L_103071f1: ;
    if ((int32_t)eax > (int32_t)loc_24) goto L_103071c4;
    eax = eax - (in_edi + 0x1cu);
    goto L_103071c6;
L_103071fa: ;
    wr32(sp0 - 0x20u, arg2 + 0x18u);
    if ((int32_t)eax <= (int32_t)(arg2 + 0x18u)) goto L_10307264;
    t10 = eax - (arg2 + 0x18u);
    esi = esi + t10 * t10;
L_10307213: ;
    eax = eax - arg2;
    goto L_10307215;
L_10307264: ;
    if ((int32_t)eax > (int32_t)loc_28) goto L_10307213;
    goto L_10307269;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103070ed(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_103070ed(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
