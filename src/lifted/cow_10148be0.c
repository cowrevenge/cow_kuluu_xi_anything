/* f_0x10148be0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10148be0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x10146310u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_10148ca7;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    if (rd8(self + 0x14u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x14u);
        goto L_10148ca7;
    }
    eax = COW_IMG(0x104856a6u);
    edx = 0u;
L_10148c02: ;
    if ((int8_t)(rd16(eax) >> 8u) >= 0)
    {
        ecx = (ecx & 0xffff0000u) | rd16(eax);
        goto L_10148c11;
    }
    ecx = (ecx & 0xffff0000u) | rd16(eax);
    if ((ecx & 0x7fffu) == 0u) goto L_10148c12;
L_10148c11: ;
    edx = edx + 1u;
L_10148c12: ;
    if ((int32_t)(eax + 2u) < (int32_t)COW_IMG(0x104856e4u))
    {
        eax = eax + 2u;
        goto L_10148c02;
    }
    if (edx != 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t4 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
        t5 = g->ecx;
        t6 = g->edx;
        if ((uint8_t)t4 != 0u)
        {
            ecx = t5;
        }
        else
        {
            eax = t4;
            edx = t6;
            t7 = rd32(self + 8u);
            g->esp = sp0 - 4u;
            cow_thiscall(g, COW_IMG(0x10118b60u), t7, 2, 0xbu, 3u);
            t8 = g->ecx;
            ecx = t8;
        }
    }
    eax = COW_IMG(0x104856e4u);
    edx = 0u;
L_10148c3c: ;
    if ((int8_t)(rd16(eax) >> 8u) >= 0)
    {
        ecx = (ecx & 0xffff0000u) | rd16(eax);
        goto L_10148c4b;
    }
    ecx = (ecx & 0xffff0000u) | rd16(eax);
    if ((ecx & 0x7fffu) == 0u) goto L_10148c4c;
L_10148c4b: ;
    edx = edx + 1u;
L_10148c4c: ;
    if ((int32_t)(eax + 2u) < (int32_t)COW_IMG(0x10485704u))
    {
        eax = eax + 2u;
        goto L_10148c3c;
    }
    if (edx != 0u)
    {
        g->edx = edx;
        g->esp = sp0 - 4u;
        t9 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
        t10 = g->edx;
        if ((uint8_t)t9 != 0u)
        {
            edx = t10;
        }
        else
        {
            eax = t9;
            edx = t10;
            g->edx = edx;
            g->esp = sp0 - 4u;
            cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 0xbu, 4u);
            t11 = g->edx;
            edx = t11;
        }
    }
    eax = COW_IMG(0x10485704u);
    ecx = 0u;
L_10148c76: ;
    if (rd16(eax) != 0xffffu)
    {
        ecx = ecx + 1u;
    }
    if ((int32_t)(eax + 2u) < (int32_t)COW_IMG(0x10485722u))
    {
        eax = eax + 2u;
        goto L_10148c76;
    }
    eax = eax + 2u;
    if (ecx != 0u)
    {
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t12 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 0xbu, 5u);
        t13 = g->edx;
        eax = t12;
        edx = t13;
    }
    g->edx = edx;
    g->esp = sp0 - 4u;
    t14 = cow_call_regs(g, COW_IMG(0x10148b20u), eax, self, g->edx, 1, 0);
    t15 = g->edx;
    wr8(self + 0x14u, 1u);
    g->edx = t15;
    return t14;
L_10148ca7: ;
    if (rd8(self + 0x14u) == 1u)
    {
        if (rd8(self + 0x15u) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x15u);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x15u);
            g->edx = edx;
            g->esp = sp0 - 4u;
            t16 = cow_call_regs(g, COW_IMG(0x10148b20u), eax, self, g->edx, 1, 0);
            t17 = g->ecx;
            t18 = g->edx;
            eax = t16;
            ecx = t17;
            edx = t18;
        }
        if (rd8(self + 0x14u) == 1u)
        {
            if (rd8(self + 0x16u) != 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(self + 0x16u);
            }
            else
            {
                eax = (eax & 0xffffff00u) | rd8(self + 0x16u);
                if (rd8(COW_IMG(0x10485641u)) >= 0x63u)
                {
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 4u;
                    t19 = cow_cdecl(g, COW_IMG(0x10097e80u), 1, 0xd21u);
                    t20 = g->edx;
                    if ((uint8_t)t19 == 0u)
                    {
                        eax = t19;
                        edx = t20;
                    }
                    else
                    {
                        eax = t19;
                        edx = t20;
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 4u;
                        t21 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 0xbu, 0xdu);
                        t22 = g->edx;
                        wr8(self + 0x16u, 1u);
                        eax = t21;
                        edx = t22;
                    }
                }
            }
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10148be0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10148be0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
