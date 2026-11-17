/* f_0x10319884 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10319884(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_4;
    uint32_t loc_41c;
    uint32_t loc_420;
    uint32_t loc_424;
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
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 1084u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x41cu, in_ebx);
    wr32(sp0 - 0x420u, in_esi);
    wr32(sp0 - 0x424u, in_edi);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x14u, 0u);
    if (arg3 != 0u) goto L_103198a4;
    edx = in_edx;
    loc_4 = in_ebp;
    loc_41c = in_ebx;
    loc_420 = in_esi;
    loc_424 = in_edi;
L_1031989d: ;
    eax = 0u;
L_10319a0a: ;
    g->ebx = loc_41c;
    g->esi = loc_420;
    g->edi = loc_424;
    g->ebp = loc_4;
    g->edx = edx;
    return eax;
L_103198a4: ;
    if ((rd8((rd32(sp0 + 4u) & 0x1fu) * 0x24u + rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)rd32(sp0 + 4u) >> 5u) * 4u) + 4u) & 0x20u) == 0u)
    {
        ecx = self;
        edx = in_edx;
        ebx = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)rd32(sp0 + 4u) >> 5u) * 4u;
        esi = (rd32(sp0 + 4u) & 0x1fu) * 0x24u;
    }
    else
    {
        eax = rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)rd32(sp0 + 4u) >> 5u) * 4u);
        ebx = COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)rd32(sp0 + 4u) >> 5u) * 4u;
        esi = (rd32(sp0 + 4u) & 0x1fu) * 0x24u;
        wr32(sp0 - 0x428u, 2u);
        wr32(sp0 - 0x42cu, 0u);
        t1 = rd32(sp0 + 4u);
        wr32(sp0 - 0x430u, t1);
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 0x424u;
        cow_cdecl(g, COW_IMG(0x1031f155u), 3, t1, 0u, 2u);
        t2 = g->ecx;
        t3 = g->edx;
        ecx = t2;
        edx = t3;
    }
    if ((rd8(esi + rd32(ebx) + 4u) & 0x80u) == 0u)
    {
        eax = esi + rd32(ebx);
        goto L_103199a3;
    }
    wr32(sp0 - 8u, arg2);
    wr32(sp0 + 4u, 0u);
    if (arg3 == 0u)
    {
        loc_4 = in_ebp;
        loc_41c = in_ebx;
        loc_420 = in_esi;
        loc_424 = in_edi;
        goto L_103199de;
    }
    loc_4 = in_ebp;
    loc_41c = in_ebx;
    loc_420 = in_esi;
    loc_424 = in_edi;
    loc_c = 0u;
    loc_14 = 0u;
    loc_8 = arg2;
L_103198f4: ;
    eax = sp0 - 0x418u;
L_103198fa: ;
    if (loc_8 - arg2 >= arg3)
    {
        ecx = loc_8 - arg2;
        goto L_1031992e;
    }
    wr32(sp0 - 8u, loc_8 + 1u);
    if (rd8(loc_8) != 0xau)
    {
        ecx = (loc_8 & 0xffffff00u) | rd8(loc_8);
        loc_8 = loc_8 + 1u;
    }
    else
    {
        ecx = (loc_8 & 0xffffff00u) | rd8(loc_8);
        loc_8 = loc_8 + 1u;
        wr32(sp0 - 0x14u, loc_14 + 1u);
        wr8(eax, 0xdu);
        eax = eax + 1u;
        loc_14 = loc_14 + 1u;
    }
    wr8(eax, (uint8_t)ecx);
    if ((int32_t)(eax + 1u - (sp0 - 0x418u)) < 1024)
    {
        eax = eax + 1u;
        edx = sp0 - 0x418u;
        goto L_103198fa;
    }
    ecx = eax + 1u - (sp0 - 0x418u);
    eax = eax + 1u;
    edx = sp0 - 0x418u;
L_1031992e: ;
    wr32(sp0 - 0x428u, 0u);
    wr32(sp0 - 0x42cu, sp0 - 0x10u);
    t4 = eax - (sp0 - 0x418u);
    wr32(sp0 - 0x430u, t4);
    wr32(sp0 - 0x434u, sp0 - 0x418u);
    t5 = rd32(esi + rd32(ebx));
    wr32(sp0 - 0x438u, t5);
    g->eax = rd32(ebx);
    g->ecx = ecx;
    g->edx = edx;
    t6 = rd32(ebx);
    g->esp = sp0 - 0x424u;
    t7 = cow_stdcall(g, rd32(COW_IMG(0x10329240u)), 5, t5, sp0 - 0x418u, t4, sp0 - 0x10u, 0u);   /* kernel32.dll!WriteFile */
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 == 0u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        goto L_10319998;
    }
    ecx = t8;
    edx = t9;
    edi = t4;
    t10 = rd32(sp0 - 0xcu) + rd32(sp0 - 0x10u);
    wr32(sp0 - 0xcu, t10);
    if ((int32_t)rd32(sp0 - 0x10u) < (int32_t)edi)
    {
        loc_c = t10;
        goto L_1031996a;
    }
    loc_c = t10;
    if (rd32(sp0 - 8u) - arg2 < arg3)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_41c = rd32(sp0 - 0x41cu);
        loc_420 = rd32(sp0 - 0x420u);
        loc_424 = rd32(sp0 - 0x424u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        goto L_103198f4;
    }
L_1031996a: ;
L_1031996c: ;
    if (loc_c != 0u)
    {
        eax = loc_c;
        goto L_10319a07;
    }
    eax = loc_c;
    if (rd32(sp0 + 4u) == 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_41c = rd32(sp0 - 0x41cu);
        loc_420 = rd32(sp0 - 0x420u);
        loc_424 = rd32(sp0 - 0x424u);
        goto L_103199de;
    }
    wr32(sp0 - 0x428u, 5u);
    if (rd32(sp0 + 4u) != 5u)
    {
        t26 = rd32(sp0 + 4u);
        wr32(sp0 - 0x428u, t26);
        g->eax = eax;
        g->esp = sp0 - 0x424u;
        t27 = cow_call_regs(g, COW_IMG(0x10319c16u), g->eax, ecx, edx, 1, 1, t26);
        t28 = g->edx;
        eax = t27;
        edx = t28;
    }
    else
    {
        g->eax = eax;
        g->esp = sp0 - 0x424u;
        t21 = cow_fastcall(g, COW_IMG(0x10319c89u), ecx, edx, 0);
        t22 = g->ecx;
        t23 = g->edx;
        wr32(t21, 9u);
        t24 = cow_fastcall(g, COW_IMG(0x10319c92u), t22, t23, 0);
        t25 = g->edx;
        wr32(t24, 5u);
        eax = t24;
        edx = t25;
    }
L_103199d9: ;
    eax = 0xffffffffu;
    loc_4 = rd32(sp0 - 4u);
    loc_41c = rd32(sp0 - 0x41cu);
    loc_420 = rd32(sp0 - 0x420u);
    loc_424 = rd32(sp0 - 0x424u);
    goto L_10319a0a;
L_10319998: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x424u;
    t11 = cow_stdcall(g, rd32(COW_IMG(0x10329168u)), 0);   /* kernel32.dll!GetLastError */
    t12 = g->ecx;
    t13 = g->edx;
    wr32(sp0 + 4u, t11);
    ecx = t12;
    edx = t13;
    loc_c = rd32(sp0 - 0xcu);
    goto L_1031996a;
L_103199a3: ;
    wr32(sp0 - 0x428u, 0u);
    wr32(sp0 - 0x42cu, sp0 - 0x10u);
    wr32(sp0 - 0x430u, arg3);
    wr32(sp0 - 0x434u, arg2);
    wr32(sp0 - 0x438u, rd32(eax));
    g->eax = eax;
    g->ecx = sp0 - 0x10u;
    g->edx = edx;
    g->esp = sp0 - 0x424u;
    t14 = cow_stdcall(g, rd32(COW_IMG(0x10329240u)), 5, rd32(eax), arg2, arg3, sp0 - 0x10u, 0u);   /* kernel32.dll!WriteFile */
    t15 = g->ecx;
    t16 = g->edx;
    if (t14 == 0u)
    {
        eax = t14;
        ecx = t15;
        edx = t16;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x424u;
        t18 = cow_stdcall(g, rd32(COW_IMG(0x10329168u)), 0);   /* kernel32.dll!GetLastError */
        t19 = g->ecx;
        t20 = g->edx;
        wr32(sp0 + 4u, t18);
        ecx = t19;
        edx = t20;
        loc_c = rd32(sp0 - 0xcu);
    }
    else
    {
        ecx = t15;
        edx = t16;
        t17 = rd32(sp0 - 0x10u);
        wr32(sp0 + 4u, 0u);
        wr32(sp0 - 0xcu, t17);
        loc_c = t17;
    }
    goto L_1031996c;
L_103199de: ;
    if ((rd8(esi + rd32(ebx) + 4u) & 0x40u) == 0u)
    {
        eax = rd32(ebx);
        goto L_103199f3;
    }
    if (rd8(arg2) == 0x1au) goto L_1031989d;
    eax = arg2;
L_103199f3: ;
    g->eax = eax;
    g->esp = sp0 - 0x424u;
    t29 = cow_fastcall(g, COW_IMG(0x10319c89u), ecx, edx, 0);
    t30 = g->ecx;
    t31 = g->edx;
    wr32(t29, 0x1cu);
    t32 = cow_fastcall(g, COW_IMG(0x10319c92u), t30, t31, 0);
    t33 = g->edx;
    wr32(t32, 0u);
    eax = t32;
    edx = t33;
    goto L_103199d9;
L_10319a07: ;
    eax = eax - rd32(sp0 - 0x14u);
    loc_4 = rd32(sp0 - 4u);
    loc_41c = rd32(sp0 - 0x41cu);
    loc_420 = rd32(sp0 - 0x420u);
    loc_424 = rd32(sp0 - 0x424u);
    goto L_10319a0a;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10319884(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10319884(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
