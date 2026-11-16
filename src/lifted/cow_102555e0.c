/* f_0x102555e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102555e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((uint32_t)((int32_t)(rd32(self + 0xcu) - rd32(self + 8u)) >> 3u) >= rd32(sp0 + 8u))
    {
        eax = rd32(self + 8u);
        ebp = rd32(sp0 + 8u);
        goto L_10255718;
    }
    eax = rd32(self + 8u);
    ebp = rd32(sp0 + 8u);
    if (rd32(self + 4u) == 0u)
    {
        edx = rd32(self + 4u);
        goto L_10255616;
    }
    edx = rd32(self + 4u);
    if (ebp < (uint32_t)((int32_t)(eax - edx) >> 3u))
    {
        ecx = (uint32_t)((int32_t)(eax - edx) >> 3u);
        goto L_10255618;
    }
L_10255616: ;
    ecx = ebp;
L_10255618: ;
    if (edx != 0u)
    {
        eax = (uint32_t)((int32_t)(eax - edx) >> 3u);
    }
    else
    {
        eax = 0u;
    }
    if ((int32_t)(eax + ecx) >= 0)
    {
        loc_4 = eax + ecx;
        eax = eax + ecx;
    }
    else
    {
        loc_4 = eax + ecx;
        eax = 0u;
    }
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t1 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, eax * 8u, in_edi, in_esi);
    wr32(sp0 + 8u, t1);
    if (rd32(self + 4u) == arg1)
    {
        ecx = t1;
        goto L_1025566a;
    }
    eax = rd32(self + 4u);
    ecx = t1;
L_10255652: ;
    if (ecx != 0u)
    {
        wr32(ecx, rd32(eax));
        t2 = rd32(eax + 4u);
        wr32(ecx + 4u, t2);
    }
    if (eax + 8u != arg1)
    {
        eax = eax + 8u;
        ecx = ecx + 8u;
        goto L_10255652;
    }
    ecx = ecx + 8u;
L_1025566a: ;
    if (ebp == 0u)
    {
        eax = ecx;
    }
    else
    {
        eax = ecx;
        edx = ebp;
L_10255676: ;
        if (eax != 0u)
        {
            wr32(eax, rd32(arg3));
            t3 = rd32(arg3 + 4u);
            wr32(eax + 4u, t3);
        }
        if (edx != 1u)
        {
            eax = eax + 8u;
            edx = edx - 1u;
            goto L_10255676;
        }
        eax = eax + 8u;
    }
    if (arg1 != rd32(self + 8u))
    {
        edx = ebp * 8u + ecx;
        esi = ebp * 8u;
        edi = rd32(self + 8u);
        eax = arg1 + edx - ecx - esi;
L_102556a7: ;
        if (edx != 0u)
        {
            wr32(edx, rd32(eax));
            t4 = rd32(eax + 4u);
            wr32(edx + 4u, t4);
            ecx = t4;
        }
        if (eax + 8u != edi)
        {
            eax = eax + 8u;
            edx = edx + 8u;
            goto L_102556a7;
        }
        eax = eax + 8u;
    }
    t5 = rd32(self + 4u);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x10311bf0u), 1, t5);
    t6 = loc_4 * 8u + rd32(sp0 + 8u);
    t7 = rd32(sp0 + 8u);
    wr32(self + 0xcu, t6);
    if (rd32(self + 4u) != 0u)
    {
        ecx = rd32(self + 4u);
        edx = t7;
        goto L_102556fb;
    }
    edx = t7;
    wr32(self + 4u, edx);
    t8 = ebp * 8u + edx;
    wr32(self + 8u, t8);
    return;
L_102556fb: ;
    t9 = rd32(self + 8u);
    wr32(self + 4u, edx);
    t10 = ebp * 8u + edx + (uint32_t)((int32_t)(t9 - ecx) >> 3u) * 8u;
    wr32(self + 8u, t10);
    return;
L_10255718: ;
    if ((uint32_t)((int32_t)(eax - arg1) >> 3u) >= ebp) goto L_102557ab;
    if (arg1 == eax)
    {
        ebx = ebp * 8u;
    }
    else
    {
        edx = arg1 + ebp * 8u;
        ebx = ebp * 8u;
        ecx = edx - ebx;
L_1025573d: ;
        if (edx != 0u)
        {
            wr32(edx, rd32(ecx));
            t11 = rd32(ecx + 4u);
            wr32(edx + 4u, t11);
        }
        if (ecx + 8u != eax)
        {
            ecx = ecx + 8u;
            edx = edx + 8u;
            goto L_1025573d;
        }
    }
    t12 = rd32(self + 8u);
    if (ebp == (uint32_t)((int32_t)(t12 - arg1) >> 3u)) goto L_1025577f;
    eax = t12;
    ebp = ebp - (uint32_t)((int32_t)(t12 - arg1) >> 3u);
L_1025576b: ;
    if (eax != 0u)
    {
        wr32(eax, rd32(arg3));
        t13 = rd32(arg3 + 4u);
        wr32(eax + 4u, t13);
    }
    if (ebp != 1u)
    {
        eax = eax + 8u;
        ebp = ebp - 1u;
        goto L_1025576b;
    }
L_1025577f: ;
    if (arg1 == rd32(self + 8u)) goto L_10255799;
    eax = arg1;
    ecx = rd32(self + 8u);
L_10255788: ;
    wr32(eax, rd32(arg3));
    t14 = rd32(arg3 + 4u);
    wr32(eax + 4u, t14);
    if (eax + 8u != ecx)
    {
        eax = eax + 8u;
        goto L_10255788;
    }
L_10255799: ;
    t15 = ebx + rd32(self + 8u);
    wr32(self + 8u, t15);
    return;
L_102557ab: ;
    if (ebp != 0u)
    {
        if (eax - (ebp << 3u) == eax)
        {
            ebp = ebp << 3u;
            goto L_102557d4;
        }
        ecx = eax - (ebp << 3u);
        edx = eax;
        ebp = ebp << 3u;
L_102557bc: ;
        if (edx != 0u)
        {
            wr32(edx, rd32(ecx));
            t16 = rd32(ecx + 4u);
            wr32(edx + 4u, t16);
        }
        if (ecx + 8u != eax)
        {
            ecx = ecx + 8u;
            edx = edx + 8u;
            goto L_102557bc;
        }
L_102557d4: ;
        t17 = rd32(self + 8u);
        if (arg1 == t17 - ebp) goto L_102557f4;
        eax = t17 - ebp;
        ecx = t17;
L_102557df: ;
        t18 = rd32(eax - 8u);
        wr32(ecx - 8u, t18);
        t19 = rd32(eax - 4u);
        wr32(ecx - 4u, t19);
        if (eax - 8u != arg1)
        {
            eax = eax - 8u;
            ecx = ecx - 8u;
            goto L_102557df;
        }
L_102557f4: ;
        if (arg1 != arg1 + ebp)
        {
            edx = arg1 + ebp;
            eax = arg1;
L_10255801: ;
            wr32(eax, rd32(arg3));
            t20 = rd32(arg3 + 4u);
            wr32(eax + 4u, t20);
            if (eax + 8u != edx)
            {
                eax = eax + 8u;
                goto L_10255801;
            }
        }
        wr32(self + 8u, ebp + rd32(self + 8u));
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102555e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102555e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
