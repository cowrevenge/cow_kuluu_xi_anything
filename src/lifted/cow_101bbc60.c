/* f_0x101bbc60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101bbc60(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t loc_8;
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

    if (rd32(self + 0x204u) != 1u) goto L_101bbe41;
    eax = rd32(self + 0x204u) - 1u;
    if (rd8(self) == 0u) goto L_101bbe37;
    if (rd8(self + 0x1f8u) < 7u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x1f8u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x1f8u);
        eax = (eax & 0xffffff00u) | (uint8_t)((-((uint8_t)eax < 0x13u) & 0xf4u) + 0x13u);
    }
    if ((uint8_t)eax != 0u) goto L_101bbcba;
    if (rd8(self + 0x1f9u) != 0u) goto L_101bbcba;
    eax = (eax & 0xffffff00u) | rd8(self + 0x1f9u);
    if (rd8(self + 0x1fau) != 0u) goto L_101bbcba;
    eax = (eax & 0xffffff00u) | rd8(self + 0x1fau);
    if (rd8(self + 0x1fbu) != 0u) goto L_101bbcba;
    eax = rd32(self + 0x14u);
    ebx = rd32(self + 0xcu);
L_101bbce2: ;
    t7 = eax - 1u - (uint32_t)((int32_t)(eax - 1u) >> 0x1fu);
    if ((int32_t)(uint32_t)((int32_t)t7 >> 1u) <= 0)
    {
        ecx = eax;
        ebp = 0u;
        edi = (uint32_t)((int32_t)t7 >> 1u);
        loc_4 = eax;
        loc_8 = eax - 1u;
        goto L_101bbd43;
    }
    ecx = eax;
    ebp = 0u;
    edi = (uint32_t)((int32_t)t7 >> 1u);
    loc_4 = eax;
    loc_8 = eax - 1u;
L_101bbd03: ;
    if ((int32_t)edi >= (int32_t)loc_8) goto L_101bbd43;
    t8 = rd32(self + 0x1f4u);
    g->eax = rd32(rd32(ebx + edi * 4u));
    t9 = rd32(rd32(ebx + edi * 4u));
    g->esp = sp0 - 0x18u;
    t10 = cow_thiscall(g, rd32(t9 + 8u), rd32(ebx + edi * 4u), 2, self + 0x30u, t8);
    if ((int32_t)t10 >= 0)
    {
        ecx = t10;
        zf = t10 == 0u;
        sf = (int32_t)t10 < 0;
        goto L_101bbd2b;
    }
    ecx = t10;
    eax = edi - 1u;
    loc_8 = edi - 1u;
L_101bbd34: ;
    t11 = ebp + (uint32_t)((int32_t)(eax - ebp - (uint32_t)((int32_t)(eax - ebp) >> 0x1fu)) >> 1u);
    if ((int32_t)t11 > (int32_t)ebp)
    {
        edi = t11;
        goto L_101bbd03;
    }
    edi = t11;
L_101bbd43: ;
    if (ecx == 0u) goto L_101bbd85;
    t12 = rd32(self + 0x1f4u);
    g->eax = self + 0x30u;
    g->esp = sp0 - 0x18u;
    t13 = cow_thiscall(g, rd32(rd32(rd32(ebx + edi * 4u)) + 8u), rd32(ebx + edi * 4u), 2, self + 0x30u, t12);
    if (t13 == 0u) goto L_101bbd85;
    eax = t13;
    if (edi == ebp)
    {
        if (ebp != loc_8)
        {
            t14 = rd32(self + 0x1f4u);
            g->eax = self + 0x30u;
            g->esp = sp0 - 0x18u;
            t15 = cow_thiscall(g, rd32(rd32(rd32(ebx + edi * 4u + 4u)) + 8u), rd32(ebx + edi * 4u + 4u), 2, self + 0x30u, t14);
            eax = t15;
            edi = edi + 1u;
        }
    }
    if (eax != 0u) goto L_101bbe28;
L_101bbd85: ;
    if ((int32_t)(edi - 1u) < 0)
    {
        ebp = edi - 1u;
        goto L_101bbdac;
    }
    eax = 0u;
    ebp = edi - 1u;
L_101bbd8e: ;
    if (eax != 0u) goto L_101bbdaf;
    t16 = rd32(self + 0x1f4u);
    g->eax = self + 0x30u;
    g->esp = sp0 - 0x18u;
    t17 = cow_thiscall(g, rd32(rd32(rd32(ebp * 4u + ebx)) + 8u), rd32(ebp * 4u + ebx), 2, self + 0x30u, t16);
    if ((int32_t)(ebp - 1u) >= 0)
    {
        eax = t17;
        ebp = ebp - 1u;
        goto L_101bbd8e;
    }
    eax = t17;
    ebp = ebp - 1u;
    if (eax != 0u) goto L_101bbdaf;
L_101bbdac: ;
    ebp = ebp + 1u;
L_101bbdb2: ;
    if ((int32_t)(edi + 1u) >= (int32_t)loc_4)
    {
        edi = edi + 1u;
        goto L_101bbde1;
    }
    eax = 0u;
    edi = edi + 1u;
L_101bbdbd: ;
    if (eax != 0u) goto L_101bbe04;
    t18 = rd32(self + 0x1f4u);
    g->eax = self + 0x30u;
    g->esp = sp0 - 0x18u;
    t19 = cow_thiscall(g, rd32(rd32(rd32(ebx + edi * 4u)) + 8u), rd32(ebx + edi * 4u), 2, self + 0x30u, t18);
    if ((int32_t)(edi + 1u) < (int32_t)loc_4)
    {
        eax = t19;
        edi = edi + 1u;
        goto L_101bbdbd;
    }
    eax = t19;
    edi = edi + 1u;
    if (eax != 0u) goto L_101bbe04;
L_101bbde1: ;
    wr32(self + 0x1fcu, edi - ebp);
    t22 = ebp * 4u + ebx;
    wr32(self + 0x200u, t22);
    wr32(self + 0x204u, 0u);
    return;
L_101bbcba: ;
    t1 = rd32(self + 0x1f8u);
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t2 = cow_thiscall(g, COW_IMG(0x101bb070u), self, 1, t1);
    t3 = g->edx;
    if (t2 == 0u) goto L_101bbe37;
    edx = t3;
    edi = t2;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t4 = cow_thiscall(g, COW_IMG(0x101baeb0u), edi, 0);
    t5 = g->edx;
    t6 = cow_thiscall(g, COW_IMG(0x101baec0u), edi, 0);
    eax = t6;
    ebx = t4;
    goto L_101bbce2;
L_101bbd2b: ;
    if (zf || sf) goto L_101bbd43;
    eax = loc_8;
    ebp = edi + 1u;
    goto L_101bbd34;
L_101bbdaf: ;
    ebp = ebp + 2u;
    goto L_101bbdb2;
L_101bbe04: ;
    t20 = edi - ebp - 1u;
    wr32(self + 0x1fcu, t20);
    t21 = ebp * 4u + ebx;
    wr32(self + 0x200u, t21);
    wr32(self + 0x204u, 0u);
    return;
L_101bbe28: ;
    wr32(self + 0x200u, 0u);
    wr32(self + 0x1fcu, 0u);
L_101bbe37: ;
    wr32(self + 0x204u, 0u);
L_101bbe41: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101bbc60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101bbc60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
