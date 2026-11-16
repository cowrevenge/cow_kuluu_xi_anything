/* f_0x101bbe60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101bbe60(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
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
    uint32_t t17;
    uint32_t t18;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 0x204u) == 1u)
    {
        eax = rd32(self + 0x204u);
        goto L_101bc0da;
    }
    eax = rd32(self + 0x204u);
    t1 = rd8(self);
    wr32(self + 0x204u, 0u);
    if ((uint8_t)t1 != 0u) goto L_101bbed0;
    g->eax = 0u;
    g->esp = sp0 - 0x20u;
    t2 = cow_thiscall(g, COW_IMG(0x101bc7b0u), self + 0x18u, 3, COW_IMG(0x1037c9bcu), 0xeu, 0u);
    esi = self + 0x18u;
    edi = rd32(sp0 + 4u);
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(arg2, 1u);
    return t2 & 0xffffff00u;
L_101bbed0: ;
    if ((int32_t)rd32(self + 0x1fcu) <= 0)
    {
        eax = rd32(self + 0x1fcu);
        zf = rd32(self + 0x1fcu) == 0u;
        goto L_101bbfd7;
    }
    eax = rd32(self + 0x1fcu);
    if ((int32_t)rd32(arg2) >= (int32_t)(eax + 1u))
    {
        edx = eax + 1u;
        loc_8 = eax;
    }
    else
    {
        ecx = rd32(arg2);
        edx = eax + 1u;
        loc_8 = ecx - 1u;
    }
    if ((int32_t)loc_8 <= 0)
    {
        ebx = 0u;
        loc_10 = 0u;
    }
    else
    {
        t3 = rd32(sp0 + 4u);
        eax = t3;
        ebx = 0u;
        esi = 0u;
        loc_10 = 0u;
        loc_c = t3;
L_101bbf0a: ;
        g->eax = eax;
        g->edx = rd32(rd32(esi * 4u + rd32(self + 0x200u)));
        t4 = rd32(rd32(esi * 4u + rd32(self + 0x200u)));
        g->esp = sp0 - 0x20u;
        t5 = cow_thiscall(g, rd32(t4 + 0x10u), rd32(esi * 4u + rd32(self + 0x200u)), 0);
        t6 = g->edx;
        if (rd8(t5) == 0x20u)
        {
            edx = t6;
        }
        else
        {
            edx = t6;
            if ((int32_t)ebx <= 0) goto L_101bbf52;
            edi = rd32(sp0 + 4u);
            loc_4 = 0u;
L_101bbf2d: ;
            t7 = rd32(esi * 4u + rd32(self + 0x200u));
            g->eax = rd32(self + 0x200u);
            g->edx = edx;
            t8 = rd32(self + 0x200u);
            g->esp = sp0 - 0x20u;
            t9 = cow_thiscall(g, COW_IMG(0x101bc900u), edi, 1, t7);
            t10 = g->edx;
            if (t9 == 0u)
            {
                edx = t10;
                goto L_101bbf74;
            }
            edx = t10;
            if ((int32_t)(loc_4 + 1u) < (int32_t)ebx)
            {
                edi = edi + 0x18u;
                loc_4 = loc_4 + 1u;
                goto L_101bbf2d;
            }
L_101bbf52: ;
            t11 = rd32(self + 0x200u);
            esi = rd32(esi * 4u + rd32(self + 0x200u));
            edi = loc_c;
            ecx = 6u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            edx = t11;
            ebx = ebx + 1u;
            esi = loc_10;
            loc_c = loc_c + 0x18u;
        }
L_101bbf74: ;
        if ((int32_t)(esi + 1u) < (int32_t)loc_8)
        {
            eax = loc_8;
            loc_10 = esi + 1u;
            esi = esi + 1u;
            goto L_101bbf0a;
        }
        loc_10 = esi + 1u;
    }
    if ((int32_t)rd32(self + 0x1f4u) <= 0)
    {
        eax = rd32(self + 0x1f4u);
    }
    else
    {
        eax = rd32(self + 0x1f4u);
        g->esp = sp0 - 0x20u;
        cow_thiscall(g, COW_IMG(0x101bc7b0u), self + 0x18u, 3, self + 0x30u, eax, 0u);
        t12 = rd32(sp0 + 4u);
        esi = self + 0x18u;
        edi = ebx * 0x18u + rd32(sp0 + 4u);
        ecx = 6u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        eax = t12;
        ebx = ebx + 1u;
    }
    wr32(arg2, ebx);
    return (eax & 0xffffff00u) | 1u;
L_101bbfd7: ;
    if (!zf) goto L_101bc060;
    if ((int32_t)rd32(self + 0x224u) <= 0)
    {
        eax = 0u;
    }
    else
    {
        t13 = rd32(sp0 + 4u);
        wr32(sp0 + 4u, t13);
        eax = 0u;
        edx = t13;
        ebx = self + 0x22cu;
        loc_10 = 0u;
        loc_4 = 0u;
L_101bbfff: ;
        if (ebx != 0u)
        {
            if ((int32_t)eax < (int32_t)rd32(arg2))
            {
                g->eax = eax;
                g->esp = sp0 - 0x20u;
                t14 = cow_thiscall(g, COW_IMG(0x101bae20u), ebx, 0);
                t15 = rd32(sp0 + 4u);
                esi = rd32(t14);
                edi = rd32(sp0 + 4u);
                ecx = 6u;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                wr32(sp0 + 4u, t15 + 0x18u);
                eax = loc_10 + 1u;
                loc_10 = loc_10 + 1u;
            }
        }
        if ((int32_t)(loc_4 + 1u) < (int32_t)rd32(self + 0x224u))
        {
            edx = rd32(self + 0x224u);
            ebx = ebx + 0x1f0u;
            loc_4 = loc_4 + 1u;
            goto L_101bbfff;
        }
    }
    wr32(arg2, eax);
    return (eax & 0xffffff00u) | 1u;
L_101bc060: ;
    if (eax != 0xffffffffu) goto L_101bc0b0;
    g->eax = 0u;
    g->esp = sp0 - 0x20u;
    t16 = cow_thiscall(g, COW_IMG(0x101bc7b0u), self + 0x18u, 3, COW_IMG(0x1037c9b4u), 6u, 0u);
    esi = self + 0x18u;
    edi = rd32(sp0 + 4u);
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(arg2, 1u);
    return t16 & 0xffffff00u;
L_101bc0b0: ;
    t17 = rd32(self + 0x1f4u);
    g->eax = t17;
    g->esp = sp0 - 0x20u;
    t18 = cow_thiscall(g, COW_IMG(0x101bc7b0u), self + 0x18u, 3, self + 0x30u, t17, 0u);
    esi = self + 0x18u;
    edi = rd32(sp0 + 4u);
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(arg2, 1u);
    eax = t18;
L_101bc0da: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101bbe60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101bbe60(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
