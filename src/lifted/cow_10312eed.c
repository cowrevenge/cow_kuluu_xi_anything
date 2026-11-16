/* f_0x10312eed - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10312eed(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t loc_20;
    uint32_t loc_28;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
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
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 72u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, 0xffffffffu);
    wr32(sp0 - 0xcu, COW_IMG(0x1034a190u));
    wr32(sp0 - 0x10u, COW_IMG(0x1031d0acu));
    wr32(sp0 - 0x14u, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0x14u);
    wr32(sp0 - 0x30u, in_ebx);
    wr32(sp0 - 0x34u, in_esi);
    wr32(sp0 - 0x38u, in_edi);
    if (arg1 == 0u)
    {
        eax = t1;
        edx = in_edx;
        loc_14 = t1;
    }
    else
    {
        loc_14 = t1;
        if (rd32(COW_IMG(0x109f8408u)) != 3u)
        {
            eax = rd32(COW_IMG(0x109f8408u));
            goto L_10312f60;
        }
        eax = rd32(COW_IMG(0x109f8408u));
        wr32(sp0 - 0x3cu, 9u);
        g->eax = eax;
        g->esp = sp0 - 0x30u;
        t2 = cow_call_regs(g, COW_IMG(0x1031d016u), g->eax, self, in_edx, 1, 3, 9u, in_edi, in_esi);
        t3 = g->edx;
        wr32(sp0 - 8u, 0u);
        wr32(sp0 - 0x3cu, arg1);
        g->edx = t3;
        g->esp = sp0 - 0x38u;
        t4 = cow_cdecl(g, COW_IMG(0x1031b835u), 1, arg1);
        t5 = g->edx;
        wr32(sp0 - 0x20u, t4);
        if (t4 == 0u)
        {
            eax = t4;
            edx = t5;
            loc_20 = t4;
        }
        else
        {
            eax = t4;
            edx = t5;
            loc_20 = t4;
            wr32(sp0 - 0x3cu, arg1);
            wr32(sp0 - 0x40u, eax);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x30u;
            t6 = cow_cdecl(g, COW_IMG(0x1031b860u), 4, eax, arg1, rd32(sp0 - 0x38u), rd32(sp0 - 0x34u));
            t7 = g->edx;
            eax = t6;
            edx = t7;
        }
        wr32(sp0 - 8u, 0xffffffffu);
        g->eax = eax;
        g->esp = sp0 - 0x38u;
        t8 = cow_fastcall(g, COW_IMG(0x10312f57u), arg1, edx, 0);
        t9 = g->ecx;
        t10 = g->edx;
        eax = t8;
        ecx = t9;
        edx = t10;
        zf = rd32(sp0 - 0x20u) == 0u;
L_10312fa8: ;
        if (!zf) goto L_10312fc7;
        wr32(sp0 - 0x3cu, arg1);
L_10312fb9: ;
        wr32(sp0 - 0x40u, 0u);
        wr32(sp0 - 0x44u, rd32(COW_IMG(0x109f8404u)));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x38u;
        t23 = cow_stdcall(g, rd32(COW_IMG(0x10329260u)), 3, rd32(COW_IMG(0x109f8404u)), 0u, arg1);   /* kernel32.dll!HeapFree */
        t24 = g->edx;
        eax = t23;
        edx = t24;
    }
L_10312fc7: ;
    wr32(g->fs_base, loc_14);
    g->edx = edx;
    return eax;
L_10312f60: ;
    if (eax != 2u) goto L_10312fb8;
    wr32(sp0 - 0x3cu, 9u);
    g->esp = sp0 - 0x30u;
    cow_call_regs(g, COW_IMG(0x1031d016u), g->eax, self, in_edx, 1, 3, 9u, in_edi, in_esi);
    t11 = g->edx;
    wr32(sp0 - 8u, 1u);
    wr32(sp0 - 0x3cu, sp0 - 0x24u);
    wr32(sp0 - 0x40u, sp0 - 0x2cu);
    wr32(sp0 - 0x44u, arg1);
    g->eax = sp0 - 0x2cu;
    g->ecx = 9u;
    g->edx = t11;
    g->esp = sp0 - 0x38u;
    t12 = cow_cdecl(g, COW_IMG(0x1031c9b2u), 3, arg1, sp0 - 0x2cu, sp0 - 0x24u);
    t13 = g->ecx;
    t14 = g->edx;
    wr32(sp0 - 0x28u, t12);
    if (t12 == 0u)
    {
        eax = t12;
        ecx = t13;
        edx = t14;
        loc_28 = t12;
    }
    else
    {
        eax = t12;
        ecx = t13;
        edx = t14;
        loc_28 = t12;
        wr32(sp0 - 0x3cu, eax);
        t15 = rd32(sp0 - 0x24u);
        wr32(sp0 - 0x40u, t15);
        t16 = rd32(sp0 - 0x2cu);
        wr32(sp0 - 0x44u, t16);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x38u;
        t17 = cow_cdecl(g, COW_IMG(0x1031ca09u), 3, t16, t15, eax);
        t18 = g->ecx;
        t19 = g->edx;
        eax = t17;
        ecx = t18;
        edx = t19;
    }
    wr32(sp0 - 8u, 0xffffffffu);
    g->eax = eax;
    g->esp = sp0 - 0x38u;
    t20 = cow_fastcall(g, COW_IMG(0x10312fafu), ecx, edx, 0);
    t21 = g->ecx;
    t22 = g->edx;
    eax = t20;
    ecx = t21;
    edx = t22;
    zf = rd32(sp0 - 0x28u) == 0u;
    goto L_10312fa8;
L_10312fb8: ;
    wr32(sp0 - 0x3cu, arg1);
    ecx = self;
    edx = in_edx;
    loc_4 = in_ebp;
    loc_30 = in_ebx;
    loc_34 = in_esi;
    loc_38 = in_edi;
    goto L_10312fb9;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10312eed(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10312eed(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
