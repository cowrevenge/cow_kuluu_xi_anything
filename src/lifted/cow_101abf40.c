/* f_0x101abf40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101abf40(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_550;
    uint32_t loc_558;
    uint32_t loc_55c;
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 1416u);

    wr32(sp0 - 0x560u, in_ebp);
    if ((int32_t)rd32(self + 0xa58u) < 0)
    {
        ebx = in_ebx;
        esi = in_esi;
        edi = in_edi;
    }
    else
    {
        eax = rd32(self + 0xa58u);
        if ((int32_t)eax > (int32_t)rd32(self + 0x888u))
        {
            ebx = in_ebx;
            esi = in_esi;
            edi = in_edi;
        }
        else
        {
            wr32(sp0 - 0x564u, in_ebx);
            wr32(sp0 - 0x568u, in_esi);
            wr32(sp0 - 0x56cu, in_edi);
            t1 = rd32(self + 0x888u);
            esi = self + 0x6c4u;
            edi = sp0 - 0x1c4u;
            ecx = eax >> 2u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            wr32(sp0 - 0x558u, eax);
            ecx = eax & 3u;
            while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            wr8(eax + sp0 - 0x1c4u, 0u);
            if (t1 == eax)
            {
                edx = eax;
                ebx = t1 - eax;
                loc_558 = eax;
            }
            else
            {
                edx = eax;
                ebx = t1 - eax;
                loc_558 = eax;
                t2 = rd32(self + 0x888u) - eax;
                esi = eax + self + 0x6c4u;
                edi = sp0 - 0x54cu;
                ecx = t2 >> 2u;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                ecx = t2 & 3u;
                while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            }
            wr8(ebx + sp0 - 0x54cu, 0u);
            wr32(sp0 - 0x570u, 0u);
            t3 = rd32(sp0 - 0x54cu);
            wr32(sp0 - 0x574u, t3);
            g->ecx = t3;
            g->edx = edx;
            g->esp = sp0 - 0x56cu;
            t4 = cow_cdecl(g, COW_IMG(0x1018fa20u), 2, t3, 0u);
            t5 = g->ecx;
            t6 = g->edx;
            if (t4 != 4u)
            {
                edx = t6;
                goto L_101ac0e3;
            }
            ecx = t5;
            wr32(sp0 - 0x570u, 0u);
            t7 = rd32(sp0 - 0x547u);
            wr32(sp0 - 0x574u, t7);
            g->edx = t7;
            g->esp = sp0 - 0x56cu;
            t8 = cow_cdecl(g, COW_IMG(0x1018fa20u), 2, t7, 0u);
            t9 = g->edx;
            if (t8 != 4u)
            {
                edx = t9;
                goto L_101ac0e3;
            }
            wr32(sp0 - 0x570u, sp0 - 0x554u);
            wr32(sp0 - 0x574u, 0x1c3u);
            wr32(sp0 - 0x578u, sp0 - 0x388u);
            wr32(sp0 - 0x57cu, ebx);
            wr32(sp0 - 0x580u, sp0 - 0x54cu);
            g->edx = sp0 - 0x54cu;
            g->esp = sp0 - 0x56cu;
            t10 = cow_call_regs(g, COW_IMG(0x101acac0u), sp0 - 0x554u, self, g->edx, 0, 5, sp0 - 0x54cu, ebx, sp0 - 0x388u, 0x1c3u, sp0 - 0x554u);
            t11 = g->edx;
            wr32(sp0 - 0x55cu, 0u);
            wr32(sp0 - 0x550u, t10);
            if ((int32_t)t10 < 0)
            {
                loc_55c = 0u;
                goto L_101ac0f6;
            }
            edx = t11;
            esi = t10;
            loc_550 = t10;
            wr32(sp0 - 0x55cu, 1u);
            if ((int32_t)rd32(sp0 - 0x554u) < 2)
            {
                eax = rd32(sp0 - 0x554u);
                ecx = 1u;
                ebx = (ebx & 0xffffff00u) | (uint8_t)arg1;
                loc_55c = 1u;
                goto L_101ac05f;
            }
            eax = rd32(sp0 - 0x554u);
            ebx = (ebx & 0xffffff00u) | (uint8_t)arg1;
            if ((uint8_t)ebx == 0u) goto L_101ac067;
            wr32(sp0 - 0x570u, eax);
            wr32(sp0 - 0x574u, esi);
            wr32(sp0 - 0x578u, sp0 - 0x388u);
            g->esp = sp0 - 0x55cu;
            t12 = cow_cdecl(g, COW_IMG(0x1018fb00u), 7, sp0 - 0x388u, esi, eax, rd32(sp0 - 0x56cu), rd32(sp0 - 0x568u), rd32(sp0 - 0x564u), rd32(sp0 - 0x560u));
            wr32(sp0 - 0x55cu, t12);
            eax = rd32(sp0 - 0x554u);
            ecx = t12;
            loc_55c = t12;
L_101ac05f: ;
            if ((uint8_t)ebx == 0u) goto L_101ac07d;
            eax = eax - ecx;
            if ((int32_t)eax <= 0) goto L_101ac07f;
            t15 = rd32(sp0 - 0x558u);
            esi = sp0 - 0x388u;
            edi = sp0 + t15 - 0x1c4u;
            ecx = eax >> 2u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            t16 = rd32(sp0 - 0x558u);
            ecx = eax & 3u;
            while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            wr8(eax + sp0 + t16 - 0x1c4u, 0u);
            edx = eax + t16;
            esi = loc_550;
L_101ac083: ;
            esi = eax + sp0 - 0x388u;
            edi = sp0 - 0x54cu;
            ecx = (esi - eax) >> 2u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            ecx = esi - eax & 3u;
            while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            wr8(esi + sp0 - eax - 0x54cu, 0u);
            ebx = esi - eax;
L_101ac0fa: ;
            esi = sp0 - 0x1c4u;
            edi = self + 0x6c4u;
            ecx = edx >> 2u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            ecx = edx & 3u;
            while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            if (ebx != 0u)
            {
                esi = loc_55c + sp0 - 0x54cu;
                edi = edx + self + 0x6c4u;
                ecx = (ebx - loc_55c) >> 2u;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                ecx = ebx - loc_55c & 3u;
                while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            }
            wr32(sp0 - 0x570u, 0u);
            wr32(sp0 - 0x574u, 0u);
            t19 = ebx + edx - loc_55c;
            wr32(self + 0x888u, t19);
            wr8(self + t19 + 0x6c4u, 0u);
            t20 = rd32(self + 0x888u);
            wr32(self + 0xa58u, edx);
            wr32(sp0 - 0x578u, t20);
            wr32(sp0 - 0x57cu, self + 0x6c4u);
            t21 = rd32(self + 0xa54u) + 1u;
            wr32(sp0 - 0x580u, t21);
            wr32(sp0 - 0x584u, self + 0x88cu);
            g->esp = sp0 - 0x56cu;
            t22 = cow_call_regs(g, COW_IMG(0x101ac990u), self + 0x88cu, self, g->edx, 0, 6, self + 0x88cu, t21, self + 0x6c4u, t20, 0u, 0u);
            t23 = rd32(sp0 - 0x568u);
            t24 = rd32(sp0 - 0x56cu);
            wr32(self + 0xa50u, t22);
            wr8(self + 0xc24u, 1u);
            wr8(self + 0xc78u, 1u);
            ebx = rd32(sp0 - 0x564u);
            esi = t23;
            edi = t24;
        }
    }
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    return;
L_101ac067: ;
    wr32(sp0 - 0x570u, 0u);
    t13 = rd32(sp0 - 0x388u);
    wr32(sp0 - 0x574u, t13);
    g->esp = sp0 - 0x56cu;
    t14 = cow_cdecl(g, COW_IMG(0x1018fa80u), 2, t13, 0u);
    wr32(sp0 - 0x55cu, t14);
    loc_55c = t14;
L_101ac07d: ;
    eax = 0u;
L_101ac07f: ;
    edx = rd32(sp0 - 0x558u);
    goto L_101ac083;
L_101ac0e3: ;
    wr32(sp0 - 0x570u, 0u);
    t17 = rd32(sp0 - 0x54cu);
    wr32(sp0 - 0x574u, t17);
    g->esp = sp0 - 0x56cu;
    t18 = cow_cdecl(g, COW_IMG(0x1018fa80u), 2, t17, 0u);
    wr32(sp0 - 0x55cu, t18);
    loc_55c = t18;
L_101ac0f6: ;
    edx = rd32(sp0 - 0x558u);
    goto L_101ac0fa;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101abf40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101abf40(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
