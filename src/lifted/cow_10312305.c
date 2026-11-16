/* f_0x10312305 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10312305(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t1);
    if (arg2 * arg3 != 0u)
    {
        eax = t1;
        if ((rd16(rd32(sp0 + 0x10u) + 0xcu) & 0x10cu) == 0u)
        {
            esi = rd32(sp0 + 0x10u);
            wr32(sp0 + 0x10u, 0x1000u);
            edx = in_edx;
            ebx = arg2 * arg3;
        }
        else
        {
            esi = rd32(sp0 + 0x10u);
            t2 = rd32(esi + 0x18u);
            wr32(sp0 + 0x10u, t2);
            eax = t2;
            edx = in_edx;
            ebx = arg2 * arg3;
        }
L_10312343: ;
        if ((rd32(esi + 0xcu) & 0x108u) == 0u)
        {
            ecx = rd32(esi + 0xcu) & 0x108u;
            goto L_10312377;
        }
        ecx = rd32(esi + 0xcu) & 0x108u;
        if (rd32(esi + 4u) == 0u)
        {
            eax = rd32(esi + 4u);
            goto L_10312377;
        }
        eax = rd32(esi + 4u);
        if (ebx < eax)
        {
            edi = ebx;
        }
        else
        {
            edi = eax;
        }
        t3 = rd32(sp0 + 4u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t4 = cow_cdecl(g, COW_IMG(0x103169e0u), 5, rd32(esi), t3, edi, in_edi, in_esi);
        t5 = g->edx;
        wr32(esi + 4u, rd32(esi + 4u) - edi);
        wr32(esi, edi + rd32(esi));
        wr32(sp0 + 4u, edi + rd32(sp0 + 4u));
        eax = t4;
        edx = t5;
        ebx = ebx - edi;
L_103123bd: ;
L_103123eb: ;
        if (ebx != 0u) goto L_10312343;
        eax = arg3;
    }
    else
    {
        eax = 0u;
        edx = in_edx;
    }
L_103123f6: ;
    g->edx = edx;
    return eax;
L_10312377: ;
    if (ebx < rd32(sp0 + 0x10u)) goto L_103123c2;
    if (ecx == 0u) goto L_1031238b;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t6 = cow_cdecl(g, COW_IMG(0x10318845u), 5, esi, in_edi, in_esi, in_ebx, arg2 * arg3);
    t7 = g->edx;
    if (t6 != 0u) goto L_10312404;
    eax = t6;
    ecx = esi;
    edx = t7;
L_1031238b: ;
    if (rd32(sp0 + 0x10u) == 0u)
    {
        edi = ebx;
    }
    else
    {
        t8 = cow_divu(g, ebx, rd32(sp0 + 0x10u));
        t9 = cow_modu(g, ebx, rd32(sp0 + 0x10u));
        eax = t8;
        edx = t9;
        edi = ebx - t9;
    }
    t10 = rd32(sp0 + 4u);
    t11 = rd32(esi + 0x10u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t12 = cow_cdecl(g, COW_IMG(0x1031981fu), 3, t11, t10, edi);
    t13 = g->edx;
    if (t12 == 0xffffffffu) goto L_103123fb;
    eax = t12;
    edx = t13;
    wr32(sp0 + 4u, eax + rd32(sp0 + 4u));
    if (eax < edi)
    {
        ebx = ebx - eax;
        goto L_103123fb;
    }
    ebx = ebx - eax;
    goto L_103123bd;
L_103123c2: ;
    t14 = (uint32_t)(int8_t)rd8(rd32(sp0 + 4u));
    g->eax = t14;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t15 = cow_cdecl(g, COW_IMG(0x10318b86u), 4, t14, esi, in_edi, in_esi);
    t16 = g->edx;
    if (t15 == 0xffffffffu) goto L_10312404;
    edx = t16;
    wr32(sp0 + 4u, rd32(sp0 + 4u) + 1u);
    t17 = rd32(esi + 0x18u);
    wr32(sp0 + 0x10u, t17);
    if ((int32_t)t17 > 0)
    {
        eax = t17;
        ebx = ebx - 1u;
    }
    else
    {
        eax = t17;
        ebx = ebx - 1u;
        wr32(sp0 + 0x10u, 1u);
    }
    goto L_103123eb;
L_103123fb: ;
    wr32(esi + 0xcu, rd32(esi + 0xcu) | 0x20u);
L_10312406: ;
    t18 = cow_divu(g, arg2 * arg3 - ebx, arg2);
    t19 = cow_modu(g, arg2 * arg3 - ebx, arg2);
    eax = t18;
    edx = t19;
    goto L_103123f6;
L_10312404: ;
    goto L_10312406;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10312305(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10312305(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
