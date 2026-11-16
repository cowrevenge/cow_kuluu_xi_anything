/* f_0x10292000 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10292000(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_cf = g->cf;
    const uint32_t in_zf = g->zf;
    const uint32_t in_sf = g->sf;
    const uint32_t in_of = g->of;
    const uint32_t in_pf = g->pf;
    const uint32_t in_af = g->af;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->cf = in_cf;
    g->pf = in_pf;
    g->af = in_af;
    g->zf = in_zf;
    g->sf = in_sf;
    g->of = in_of;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x1027eb30u), 2, COW_IMG(0x109a27e8u), arg1 + 0x24u);
    t1 = g->ecx;
    t2 = g->edx;
    if (rd32(arg1 + 0x68u) == 0u)
    {
        eax = rd32(arg1 + 0x68u);
        ecx = t1;
        edx = t2;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x1027ebf0u), 1, COW_IMG(0x109a27a8u));
        t5 = g->ecx;
        t6 = g->edx;
        ecx = t5;
        edx = t6;
    }
    else
    {
        eax = rd32(arg1 + 0x68u);
        ecx = t1;
        edx = t2;
        g->cf = eax + 0x24u < eax;
        g->pf = PARITY((uint8_t)(eax + 0x24u));
        g->af = (eax ^ eax + 0x24u) >> 4u & 1u;
        g->zf = eax + 0x24u == 0u;
        g->sf = (int32_t)(eax + 0x24u) < 0;
        g->of = ((eax ^ eax + 0x24u) & (eax + 0x24u ^ 0x24u)) >> 0x1fu;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x1027eb30u), 2, COW_IMG(0x109a27a8u), eax + 0x24u);
        t3 = g->ecx;
        t4 = g->edx;
        ecx = t3;
        edx = t4;
    }
    if (rd32(arg1 + 0x64u) == 0u)
    {
        eax = rd32(arg1 + 0x64u);
        pf = PARITY((uint8_t)rd32(arg1 + 0x64u));
        zf = rd32(arg1 + 0x64u) == 0u;
        sf = (int32_t)rd32(arg1 + 0x64u) < 0;
        g->cf = 0u;
        g->pf = pf;
        g->af = 0u;
        g->zf = zf;
        g->sf = sf;
        g->of = 0u;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t13 = cow_cdecl(g, COW_IMG(0x1027eb30u), 2, arg1 + 0x24u, COW_IMG(0x109a27a8u));
        t14 = g->ecx;
        t15 = g->edx;
        eax = t13;
        ecx = t14;
        edx = t15;
    }
    else
    {
        eax = rd32(arg1 + 0x64u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x10285810u), 1, eax);
        t7 = g->ecx;
        t8 = g->edx;
        t9 = rd32(arg1 + 0x64u) + 0x1cu;
        g->eax = t9;
        g->ecx = t7;
        g->edx = t8;
        g->esp = sp0 - 0xcu;
        t10 = cow_cdecl(g, COW_IMG(0x10280160u), 3, arg1 + 0x24u, COW_IMG(0x109a27a8u), t9);
        t11 = g->ecx;
        t12 = g->edx;
        eax = t10;
        ecx = t11;
        edx = t12;
    }
    if (rd8(arg1 + 0x74u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg1 + 0x74u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(arg1 + 0x74u);
        g->eax = eax;
        g->ecx = arg1 + 0x78u;
        g->esp = sp0 - 8u;
        t16 = cow_cdecl(g, COW_IMG(0x10280020u), 3, arg1 + 0x78u, COW_IMG(0x109a27e8u), arg1 + 0x24u);
        t17 = g->ecx;
        g->cf = g->cf;
        g->pf = g->pf;
        g->af = g->af;
        g->zf = g->zf;
        g->sf = g->sf;
        g->of = g->of;
        g->ecx = t17;
        g->edx = arg1 + 0xb8u;
        t18 = cow_cdecl(g, COW_IMG(0x1027eb30u), 5, arg1 + 0xb8u, arg1 + 0x24u, arg1 + 0x78u, COW_IMG(0x109a27e8u), arg1 + 0x24u);
        t19 = g->ecx;
        t20 = g->edx;
        eax = t18;
        ecx = t19;
        edx = t20;
    }
    if (rd32(arg1 + 0x6cu) == 0u) goto L_102920ad;
    esi = rd32(arg1 + 0x6cu);
L_1029209d: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t21 = cow_cdecl(g, COW_IMG(0x10292000u), 3, esi, in_edi, in_esi);
    t22 = g->ecx;
    t23 = g->edx;
    if (rd32(esi + 0x70u) != 0u)
    {
        eax = t21;
        ecx = t22;
        edx = t23;
        esi = rd32(esi + 0x70u);
        goto L_1029209d;
    }
    eax = t21;
    edx = t23;
L_102920ad: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10292000(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10292000(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
