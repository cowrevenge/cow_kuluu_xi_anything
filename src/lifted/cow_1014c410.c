/* f_0x1014c410 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1014c410(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
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

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_stdcall(g, COW_IMG(0x100f0fa0u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        ecx = t2;
        edx = t3;
        edi = t1;
    }
    else
    {
        ecx = t2;
        edx = t3;
        loc_8 = t1;
        wr32(self + 0x20u, 0u);
        ebx = self + 0x24u;
        edi = 0u;
L_1014c439: ;
        wr32(ebx, 0u);
        if (edi != 0x17u)
        {
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t4 = cow_thiscall_cdecl(g, COW_IMG(0x100f1020u), ecx, 1, edi);
            t5 = g->ecx;
            t6 = g->edx;
            if ((uint8_t)t4 != 1u)
            {
                ecx = t5;
                edx = t6;
            }
            else
            {
                edx = t6;
                cf = (uint8_t)t4 < 1u;
                pf = PARITY((uint8_t)((uint8_t)t4 - 1u));
                zf = (uint8_t)((uint8_t)t4 - 1u) == 0u;
                sf = (int8_t)((uint8_t)t4 - 1u) < 0;
                of = (((uint8_t)t4 ^ 1u) & ((uint8_t)t4 ^ (uint8_t)((uint8_t)t4 - 1u))) >> 7u;
                t7 = rd32(self + 0x20u) | 1u << (edi & 0x1fu);
                wr32(self + 0x20u, t7);
                g->ecx = t7;
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                t8 = cow_cdecl(g, COW_IMG(0x100f0ff0u), 1, edi);
                t9 = g->ecx;
                t10 = g->edx;
                wr32(ebx, (uint8_t)t8);
                ecx = t9;
                edx = t10;
            }
        }
        if ((int32_t)(edi + 1u) < 24)
        {
            ebx = ebx + 4u;
            edi = edi + 1u;
            goto L_1014c439;
        }
        wr32(self + 0x20u, rd32(self + 0x20u) & 0xfffffffeu);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t11 = cow_stdcall(g, COW_IMG(0x10146310u), 0);
        t12 = g->ecx;
        t13 = g->edx;
        if ((uint8_t)t11 == 0u)
        {
            ecx = t12;
            edx = t13;
            edi = loc_8;
        }
        else
        {
            edi = loc_8;
            if ((rd32(self + 0x20u) & 1u << (rd32(COW_IMG(0x10485640u)) & 0x1fu)) == 0u)
            {
                ecx = (uint8_t)rd32(COW_IMG(0x10485640u));
                edx = 1u << (rd32(COW_IMG(0x10485640u)) & 0x1fu);
            }
            else
            {
                ecx = (uint8_t)rd32(COW_IMG(0x10485640u));
                edx = 1u << (rd32(COW_IMG(0x10485640u)) & 0x1fu);
                wr32(ecx * 4u + self + 0x24u, rd8(COW_IMG(0x10485699u)));
            }
        }
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t14 = cow_stdcall(g, COW_IMG(0x10146310u), 0);
    t15 = g->ecx;
    t16 = g->edx;
    if ((uint8_t)t14 == 0u)
    {
        eax = t14;
        ecx = t15;
        if (edi != 0u)
        {
            wr8(self + 0x1cu, rd8(edi + 4u));
            wr8(self + 0x1du, rd8(edi + 7u));
        }
    }
    else
    {
        ecx = t15;
        edx = t16;
        wr8(self + 0x1cu, rd8(COW_IMG(0x10485640u)));
        wr8(self + 0x1du, rd8(COW_IMG(0x10485642u)));
    }
    eax = 0u;
    ecx = 1u;
L_1014c4e7: ;
    if (ecx != 0x17u)
    {
        cf = ecx < 0x17u;
        pf = PARITY((uint8_t)(ecx - 0x17u));
        zf = ecx == 0x17u;
        sf = (int32_t)(ecx - 0x17u) < 0;
        of = ((ecx ^ 0x17u) & (ecx ^ ecx - 0x17u)) >> 0x1fu;
        if ((rd32(self + 0x20u) & 1u << (ecx & 0x1fu)) != 0u)
        {
            eax = eax + 1u;
        }
    }
    if ((int32_t)(ecx + 1u) < 24)
    {
        ecx = ecx + 1u;
        goto L_1014c4e7;
    }
    ecx = ecx + 1u;
    t17 = (uint32_t)((int32_t)(eax + 1u - (uint32_t)((int32_t)(eax + 1u) >> 0x1fu)) >> 1u) * 0xeu + 0x16u;
    t18 = ((uint32_t)((int32_t)(eax + 1u - (uint32_t)((int32_t)(eax + 1u) >> 0x1fu)) >> 1u) * 8u - (uint32_t)((int32_t)(eax + 1u - (uint32_t)((int32_t)(eax + 1u) >> 0x1fu)) >> 1u) & 0xffff0000u) | (uint16_t)(rd16(self + 0x18u) - rd16(self + 0x14u));
    t19 = (t17 & 0xffff0000u) | rd16(self + 0x16u);
    t20 = (ecx & 0xffff0000u) | rd16(self + 0x14u);
    g->eax = t19;
    g->edx = t18;
    g->esp = sp0 - 0x14u;
    t21 = cow_thiscall(g, COW_IMG(0x1011a5a0u), rd32(self + 8u), 7, t20, t19, t18, t17, 0u, 0u, 0u);
    t22 = g->edx;
    g->edx = t22;
    return t21;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014c410(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014c410(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
