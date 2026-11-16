/* f_0x10195640 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10195640(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t25;
    uint32_t t26;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd8(self + 8u) != 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 8u);
        goto L_10195656;
    }
    return 1u;
L_10195656: ;
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_stdcall(g, COW_IMG(0x10310e30u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        ebp = 0xffffffffu;
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        ebx = rd32(COW_IMG(0x103290f8u));
L_10195666: ;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t4 = cow_stdcall(g, COW_IMG(0x10310e3bu), 0);
        t5 = g->ecx;
        t6 = g->edx;
        if ((int32_t)t4 < 0)
        {
            eax = t4;
            ecx = t5;
            edx = t6;
            ebp = 0xffffffffu;
            goto L_101956d7;
        }
        eax = t4;
        ecx = t5;
        edx = t6;
        zf = t4 == 0u;
        sf = (int32_t)t4 < 0;
        if (!zf && !sf) goto L_10195677;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t7 = cow_thiscall(g, ebx, ecx, 1, 0u);
        t8 = g->ecx;
        t9 = g->edx;
        eax = t7;
        ecx = t8;
        edx = t9;
        goto L_10195666;
    }
L_101956d7: ;
    wr8(self + 8u, 0u);
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, COW_IMG(0x10310e5cu), 0);
    return ebp;
L_10195677: ;
    esi = 0u;
L_1019567a: ;
    if (rd32(esi + rd32(self + 4u) + 0xcu) != 1u)
    {
        eax = esi + rd32(self + 4u);
        ecx = rd32(esi + rd32(self + 4u) + 0xcu);
        if (ecx == 2u)
        {
            t14 = rd32(eax + 8u);
            g->ecx = self;
            g->edx = t14;
            g->esp = sp0 - 0x10u;
            t15 = cow_stdcall(g, COW_IMG(0x101958c0u), 2, eax + 0x10u, t14);
            t16 = g->ecx;
            t17 = g->edx;
            eax = t15;
            ecx = t16;
            edx = t17;
        }
    }
    else
    {
        eax = esi + rd32(self + 4u);
        t10 = rd32(eax + 8u);
        g->ecx = self;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t11 = cow_stdcall(g, COW_IMG(0x101957b0u), 2, eax + 0x10u, t10);
        t12 = g->ecx;
        t13 = g->edx;
        eax = t11;
        ecx = t12;
        edx = t13;
    }
    if ((int32_t)(esi + 0x2cu) < 9108)
    {
        esi = esi + 0x2cu;
        goto L_1019567a;
    }
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t18 = cow_stdcall(g, COW_IMG(0x10310e46u), 0);
    t19 = g->ecx;
    t20 = g->edx;
    if (t18 == 0u)
    {
        eax = t18;
        ecx = t19;
        edx = t20;
        ebp = 0xffffffffu;
        goto L_101956d7;
    }
    eax = t18;
    ecx = t19;
    edx = t20;
L_101956c1: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t21 = cow_stdcall(g, COW_IMG(0x10310e51u), 0);
    t22 = g->ecx;
    t23 = g->edx;
    if ((int32_t)t21 < 0)
    {
        eax = t21;
        ecx = t22;
        edx = t23;
        ebp = 0xffffffffu;
        goto L_101956d7;
    }
    eax = t21;
    ecx = t22;
    edx = t23;
    zf = t21 == 0u;
    sf = (int32_t)t21 < 0;
    if (!zf && !sf) goto L_101956d2;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t24 = cow_thiscall(g, ebx, ecx, 1, 0u);
    t25 = g->ecx;
    t26 = g->edx;
    eax = t24;
    ecx = t25;
    edx = t26;
    goto L_101956c1;
L_101956d2: ;
    ebp = 1u;
    goto L_101956d7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10195640(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10195640(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
