/* f_0x10147f20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10147f20(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
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
    uint32_t t23;
    uint32_t t24;
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
        eax = t1;
        ecx = t2;
        edx = t3;
        edi = t1;
    }
    else
    {
        ecx = t2;
        edx = t3;
        edi = t1;
        loc_4 = t1;
        t4 = (rd32(edi + 8u) & 0xffffff00u) | (rd32(edi + 8u) & 0xfeu);
        wr32(self + 0x80u, t4);
        ebx = self + 0x20u;
        edi = 0u;
L_10147f4d: ;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t5 = cow_cdecl(g, COW_IMG(0x100f0fb0u), 1, edi);
        t6 = g->ecx;
        t7 = g->edx;
        wr32(ebx, (uint8_t)t5);
        if ((int32_t)(edi + 1u) < 24)
        {
            ecx = t6;
            edx = t7;
            ebx = ebx + 4u;
            edi = edi + 1u;
            goto L_10147f4d;
        }
        ecx = t6;
        edx = t7;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t8 = cow_stdcall(g, COW_IMG(0x10146310u), 0);
        t9 = g->ecx;
        t10 = g->edx;
        if ((uint8_t)t8 == 0u)
        {
            eax = t8;
            ecx = t9;
            edx = t10;
            edi = loc_4;
        }
        else
        {
            edx = t10;
            edi = loc_4;
            t11 = (uint8_t)(rd32(COW_IMG(0x10485640u)) >> 8u);
            t12 = rd32(COW_IMG(0x10485640u));
            wr32(self + (uint8_t)t12 * 4u + 0x20u, t11);
            eax = (uint8_t)t12;
            ecx = t11;
        }
    }
    if (rd8(self + 0x18u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x18u);
    }
    else
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t13 = cow_stdcall(g, COW_IMG(0x10146310u), 0);
        t14 = g->ecx;
        t15 = g->edx;
        if ((uint8_t)t13 == 0u)
        {
            eax = t13;
            ecx = t14;
            edx = t15;
            if (edi != 0u)
            {
                wr8(self + 0x15u, rd8(edi + 4u));
                t18 = rd8(edi + 7u);
                wr8(self + 0x16u, (uint8_t)t18);
                edx = (edx & 0xffffff00u) | t18;
            }
        }
        else
        {
            eax = t13;
            edx = t15;
            t16 = rd8(COW_IMG(0x10485640u));
            wr8(self + 0x15u, (uint8_t)t16);
            t17 = rd8(COW_IMG(0x10485642u));
            wr8(self + 0x16u, (uint8_t)t17);
            eax = (eax & 0xffffff00u) | t17;
            edx = (edx & 0xffffff00u) | t16;
        }
    }
    if (rd8(self + 0x14u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x14u);
    }
    else
    {
        ecx = 1u;
        ebx = 0u;
L_10147fc8: ;
        if (ecx != 0x17u)
        {
            cf = ecx < 0x17u;
            pf = PARITY((uint8_t)(ecx - 0x17u));
            zf = ecx == 0x17u;
            sf = (int32_t)(ecx - 0x17u) < 0;
            of = ((ecx ^ 0x17u) & (ecx ^ ecx - 0x17u)) >> 0x1fu;
            if ((rd32(self + 0x80u) & 1u << (ecx & 0x1fu)) != 0u)
            {
                ebx = ebx + 1u;
            }
        }
        if ((int32_t)(ecx + 1u) < 24)
        {
            ecx = ecx + 1u;
            goto L_10147fc8;
        }
        ecx = ecx + 1u;
        t19 = (uint32_t)((int32_t)(ebx + 1u - (uint32_t)((int32_t)(ebx + 1u) >> 0x1fu)) >> 1u) * 0xeu + 0x16u;
        t20 = ((uint32_t)((int32_t)(ebx + 1u - (uint32_t)((int32_t)(ebx + 1u) >> 0x1fu)) >> 1u) * 8u - (uint32_t)((int32_t)(ebx + 1u - (uint32_t)((int32_t)(ebx + 1u) >> 0x1fu)) >> 1u) & 0xffff0000u) | (uint16_t)(rd16(self + 0x88u) - rd16(self + 0x84u));
        t21 = (t19 & 0xffff0000u) | rd16(self + 0x86u);
        t22 = (ecx & 0xffff0000u) | rd16(self + 0x84u);
        g->eax = t21;
        g->edx = t20;
        g->esp = sp0 - 0x14u;
        t23 = cow_thiscall(g, COW_IMG(0x1011a5a0u), rd32(self + 8u), 7, t22, t21, t20, t19, 0u, 0u, 0u);
        t24 = g->edx;
        eax = t23;
        edx = t24;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10147f20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10147f20(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
