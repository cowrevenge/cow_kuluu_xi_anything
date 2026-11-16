/* f_0x100f1160 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100f1160(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(arg1 + 0x24u) > 3u)
    {
        edi = 0u;
        goto L_100f125b;
    }
    eax = rd32(arg1 + 0x24u);
    t1 = rd32(COW_IMG(0x100f1264u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x100f117eu: goto L_100f117e;
    case 0x100f11a5u: ecx = self; edx = in_edx; goto L_100f11a5;
    case 0x100f11afu: ecx = self; goto L_100f11af;
    case 0x100f1219u: goto L_100f1219;
    default: rt_fatal(g, COW_IMG(0x100f1177u), "switch");
    }
    return 0;
L_100f117e: ;
    t7 = rd32(arg1 + 8u);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t8 = cow_cdecl(g, COW_IMG(0x100f13b0u), 1, t7);
    t9 = g->edx;
    if ((uint8_t)t8 != 0u)
    {
        edi = 0u;
        goto L_100f125b;
    }
    eax = t8;
    edx = t9;
    t10 = rd32(arg1 + 8u);
    g->ecx = t10;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x100f13d0u), 1, t10);
    t11 = g->ecx;
    t12 = g->edx;
    t13 = rd32(arg1 + 0x24u) + 1u;
    wr32(arg1 + 0x24u, t13);
    ecx = t11;
    edx = t12;
L_100f11a5: ;
    if (rd32(arg1 + 0xcu) != 0u)
    {
        eax = rd32(arg1 + 0xcu);
        goto L_100f11cb;
    }
    eax = rd32(arg1 + 0xcu);
    wr32(arg1 + 0x24u, rd32(arg1 + 0x24u) + 1u);
L_100f11af: ;
    t14 = rd32(arg1 + 0x18u);
    g->eax = eax;
    g->edx = t14;
    g->esp = sp0 - 0xcu;
    t15 = cow_thiscall_cdecl(g, rd32(arg1 + 0x10u), ecx, 1, t14);
    t16 = g->ecx;
    t17 = g->edx;
    wr32(arg1 + 0x20u, t15);
    if ((int32_t)t15 >= 0) goto L_100f1209;
    eax = t15;
    ecx = t16;
    edx = t17;
    if (eax != 0xffffeb34u) goto L_100f11e2;
    edi = eax;
L_100f1246: ;
    t20 = rd32(arg1 + 8u);
    wr32(arg1 + 0x28u, 0u);
    wr32(arg1 + 0x24u, 0u);
    wr32(arg1 + 0x20u, 0u);
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x100f13f0u), 1, t20);
L_100f125b: ;
    return edi;
L_100f11cb: ;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t22 = cow_thiscall(g, eax, ecx, 0);
    if (t22 == 0u)
    {
        edi = 0u;
        goto L_100f125b;
    }
    t23 = rd32(arg1 + 0x24u) + 1u;
    wr32(arg1 + 0x24u, t23);
    return 0u;
L_100f11e2: ;
    if ((int32_t)eax < -2047) goto L_100f1204;
    if ((int32_t)rd32(arg1 + 0x28u) >= 50)
    {
        ecx = rd32(arg1 + 0x28u);
        goto L_100f1204;
    }
    ecx = rd32(arg1 + 0x28u);
    wr32(arg1 + 0x28u, ecx + 1u);
    g->esp = sp0 - 0xcu;
    cow_thiscall_cdecl(g, COW_IMG(0x100182c0u), ecx + 1u, 1, eax);
    return 0u;
L_100f1204: ;
    edi = eax;
    loc_10 = eax;
L_100f123a: ;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0xcu;
    t18 = cow_cdecl(g, COW_IMG(0x100182e0u), 1, loc_10);
    t19 = g->ecx;
    eax = t18;
    ecx = t19;
L_100f1242: ;
    zf = edi == 0u;
L_100f1244: ;
    if (zf) goto L_100f125b;
    goto L_100f1246;
L_100f1209: ;
    t21 = rd32(arg1 + 0x24u);
    wr32(arg1 + 0x28u, 0u);
    wr32(arg1 + 0x24u, t21 + 1u);
    return 0u;
L_100f1219: ;
    t2 = rd32(arg1 + 0x1cu);
    t3 = rd32(arg1 + 0x20u);
    g->eax = t2;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_thiscall_cdecl(g, rd32(arg1 + 0x14u), t3, 2, t3, t2);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == 0u)
    {
        edi = t4;
        goto L_100f125b;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    edi = t4;
    if (edi == 0xffffeb34u) goto L_100f1242;
    if ((int32_t)edi >= 0)
    {
        zf = edi == 0u;
        goto L_100f1244;
    }
    loc_10 = edi;
    goto L_100f123a;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f1160(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f1160(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
