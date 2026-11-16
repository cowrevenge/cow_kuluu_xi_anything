/* f_0x10228340 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10228340(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(self + 4u) != 0u) goto L_10228361;
    eax = (in_eax & 0xffffff00u) | rd8(self + 4u);
    return 0xffffffffu;
L_10228361: ;
    ecx = self + 8u;
    edx = in_edx;
    ebx = 0xffffffffu;
    esi = 0u;
L_1022836d: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall(g, COW_IMG(0x10227110u), ecx, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((int32_t)t1 >= 0)
    {
        ecx = t2;
        edx = t3;
        goto L_1022837f;
    }
    ecx = t2;
    edx = t3;
    if (ebx == 0xffffffffu)
    {
        ebx = esi;
    }
L_10228388: ;
    if ((int32_t)(esi + 1u) < 32)
    {
        ecx = ecx + 0x10u;
        esi = esi + 1u;
        goto L_1022836d;
    }
    ecx = ecx + 0x10u;
    loc_4 = 0xffffffffu;
L_102283c2: ;
    if (ebx != 0xffffffffu) goto L_102283fe;
    eax = 0u;
L_102283c9: ;
    if (rd8(eax + self + 0x208u) == 0u) goto L_102283e6;
    ecx = (ecx & 0xffffff00u) | rd8(eax + self + 0x208u);
    if ((int32_t)(eax + 1u) < 32)
    {
        eax = eax + 1u;
        goto L_102283c9;
    }
    return loc_4;
L_1022837f: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t4 = cow_thiscall(g, COW_IMG(0x10227110u), ecx, 0);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == arg1)
    {
        edx = t6;
        goto L_10228393;
    }
    ecx = t5;
    edx = t6;
    goto L_10228388;
L_10228393: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t7 = cow_thiscall(g, COW_IMG(0x102270e0u), esi * 0x10u + self + 8u, 0);
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 != 0u)
    {
        ecx = t8;
        edx = t9;
        goto L_102283ba;
    }
    ecx = t8;
    edx = t9;
    g->edx = edx;
    t10 = rd32(COW_IMG(0x106671b4u));
    g->esp = sp0 - 0x14u;
    t11 = cow_thiscall(g, COW_IMG(0x102272b0u), t10, 2, ecx, arg1);
    t12 = g->ecx;
    t13 = g->edx;
    if ((int32_t)t11 > 0)
    {
        ecx = t12;
        edx = t13;
        goto L_102283ba;
    }
    ecx = t12;
    edx = t13;
    ebx = esi;
    loc_4 = 0xffffffffu;
    goto L_102283c2;
L_102283ba: ;
    if ((int32_t)esi >= 0)
    {
        loc_4 = esi;
        goto L_1022842a;
    }
    loc_4 = esi;
    goto L_102283c2;
L_102283e6: ;
    g->esp = sp0 - 0x14u;
    cow_fastcall(g, COW_IMG(0x102270b0u), eax * 0x10u + self + 8u, edx, 0);
    return loc_4;
L_102283fe: ;
    t14 = ebx * 0x10u + self + 8u;
    g->esp = sp0 - 0x14u;
    t15 = cow_thiscall(g, COW_IMG(0x102272b0u), rd32(COW_IMG(0x106671b4u)), 2, t14, arg1);
    if ((int32_t)t15 <= 0) goto L_10228432;
    wr8(ebx + self + 0x208u, 1u);
    return ebx;
L_1022842a: ;
    wr8(esi + self + 0x208u, 1u);
L_10228432: ;
    return loc_4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10228340(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10228340(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
