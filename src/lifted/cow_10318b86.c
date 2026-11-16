/* f_0x10318b86 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10318b86(Guest* g)
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    if ((rd32(rd32(sp0 + 8u) + 0xcu) & 0x82u) == 0u)
    {
        eax = rd32(rd32(sp0 + 8u) + 0xcu);
        esi = rd32(sp0 + 8u);
        goto L_10318c92;
    }
    eax = rd32(rd32(sp0 + 8u) + 0xcu);
    ebx = rd32(rd32(sp0 + 8u) + 0x10u);
    esi = rd32(sp0 + 8u);
    if ((eax & 0x40u) != 0u) goto L_10318c92;
    if (!(eax & 1u))
    {
        ecx = self;
        goto L_10318bbe;
    }
    wr32(esi + 4u, 0u);
    if ((eax & 0x10u) == 0u) goto L_10318c92;
    t1 = rd32(esi + 8u);
    wr32(esi, t1);
    t2 = (eax & 0xffffff00u) | (eax & 0xfeu);
    wr32(esi + 0xcu, t2);
    ecx = t1;
L_10318bbe: ;
    t3 = rd32(esi + 0xcu);
    wr32(esi + 4u, 0u);
    wr32(sp0 + 8u, 0u);
    t4 = (t3 & 0xffffff00u) | (t3 & 0xefu) | 2u;
    wr32(esi + 0xcu, t4);
    if ((((t3 & 0xffffff00u) | (t3 & 0xefu)) & 0x10cu) != 0u)
    {
        edx = in_edx;
    }
    else
    {
        eax = t4;
        if (esi == COW_IMG(0x103d03c0u)) goto L_10318be6;
        if (esi != COW_IMG(0x103d03e0u))
        {
            edx = in_edx;
            goto L_10318bf1;
        }
L_10318be6: ;
        wr32(sp0 - 0x10u, ebx);
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t5 = cow_cdecl(g, COW_IMG(0x10323bceu), 1, ebx);
        t6 = g->edx;
        if (t5 != 0u)
        {
            ecx = rd32(sp0 - 0x10u);
            edx = t6;
            goto L_10318bf8;
        }
        eax = t5;
        ecx = rd32(sp0 - 0x10u);
        edx = t6;
L_10318bf1: ;
        wr32(sp0 - 0x10u, esi);
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x10323b8au), 1, esi);
        t7 = g->edx;
        ecx = rd32(sp0 - 0x10u);
        edx = t7;
    }
L_10318bf8: ;
    wr32(sp0 - 0x10u, in_edi);
    if ((rd16(esi + 0xcu) & 0x108u) == 0u)
    {
        wr32(sp0 - 0x14u, 1u);
        wr32(sp0 - 0x14u, 1u);
        wr32(sp0 - 0x18u, sp0 + 4u);
        wr32(sp0 - 0x1cu, ebx);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t18 = cow_cdecl(g, COW_IMG(0x1031981fu), 3, ebx, sp0 + 4u, 1u);
        t19 = g->edx;
        wr32(sp0 + 8u, t18);
        eax = t18;
        edx = t19;
        edi = 1u;
    }
    else
    {
        t8 = rd32(esi + 8u) + 1u;
        t9 = rd32(esi + 8u);
        t10 = rd32(esi);
        wr32(esi, t8);
        t11 = rd32(esi + 0x18u) - 1u;
        wr32(esi + 4u, t11);
        if ((int32_t)(t10 - t9) <= 0)
        {
            ecx = t11;
            edi = t10 - t9;
            if (ebx == 0xffffffffu)
            {
                eax = COW_IMG(0x103d2c10u);
            }
            else
            {
                eax = (ebx & 0x1fu) * 0x24u + rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)ebx >> 5u) * 4u);
                ecx = rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)ebx >> 5u) * 4u);
            }
            if ((rd8(eax + 4u) & 0x20u) != 0u)
            {
                wr32(sp0 - 0x14u, 2u);
                wr32(sp0 - 0x18u, 0u);
                wr32(sp0 - 0x1cu, ebx);
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                cow_cdecl(g, COW_IMG(0x1031f0f0u), 3, ebx, 0u, 2u);
                t15 = g->ecx;
                t16 = g->edx;
                ecx = t15;
                edx = t16;
            }
        }
        else
        {
            eax = t9;
            ecx = t11;
            edi = t10 - t9;
            wr32(sp0 - 0x14u, edi);
            wr32(sp0 - 0x18u, eax);
            wr32(sp0 - 0x1cu, ebx);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t12 = cow_cdecl(g, COW_IMG(0x1031981fu), 3, ebx, eax, edi);
            t13 = g->ecx;
            t14 = g->edx;
            wr32(sp0 + 8u, t12);
            ecx = t13;
            edx = t14;
        }
        t17 = rd32(esi + 8u);
        wr8(t17, (uint8_t)arg1);
        eax = t17;
    }
    if (rd32(sp0 + 8u) == edi) goto L_10318c88;
    wr32(esi + 0xcu, rd32(esi + 0xcu) | 0x20u);
L_10318c97: ;
    eax = 0xffffffffu;
L_10318c9a: ;
    g->edx = edx;
    return eax;
L_10318c88: ;
    eax = (uint8_t)arg1;
    goto L_10318c9a;
L_10318c92: ;
    t20 = (eax & 0xffffff00u) | (uint8_t)(eax | 0x20u);
    wr32(esi + 0xcu, t20);
    eax = t20;
    edx = in_edx;
    goto L_10318c97;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10318b86(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10318b86(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
