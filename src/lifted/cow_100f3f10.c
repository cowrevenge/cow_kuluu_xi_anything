/* f_0x100f3f10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100f3f10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 20u);

    wr32(sp0 - 4u, in_esi);
    if (arg1 > 3u) goto L_100f40a3;
    t1 = rd32(COW_IMG(0x100f40acu) + arg1 * 4u);
    switch (t1 - RD)
    {
    case 0x100f3f27u: goto L_100f3f27;
    case 0x100f3f30u: goto L_100f3f30;
    case 0x100f3f98u: goto L_100f3f98;
    case 0x100f407du: goto L_100f407d;
    default: rt_fatal(g, COW_IMG(0x100f3f20u), "switch");
    }
    return 0;
L_100f3f27: ;
    return 3u;
L_100f3f30: ;
    wr32(sp0 - 8u, in_edi);
    wr32(sp0 - 0xcu, self + 0xe48u);
    g->eax = arg1;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t20 = cow_stdcall(g, rd32(COW_IMG(0x103291e4u)), 1, self + 0xe48u);   /* kernel32.dll!GetFileAttributesA */
    t21 = g->ecx;
    t22 = g->edx;
    if (t20 == 0xffffffffu)
    {
        eax = t20;
        ecx = t21;
        edx = t22;
    }
    else
    {
        eax = t20;
        ecx = t21;
        edx = t22;
        if (eax & 1u)
        {
            t23 = (eax & 0xffffff00u) | (eax & 0xfeu);
            wr32(sp0 - 0xcu, t23);
            wr32(sp0 - 0x10u, self + 0xe48u);
            g->eax = t23;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t24 = cow_stdcall(g, rd32(COW_IMG(0x103291e0u)), 2, self + 0xe48u, t23);   /* kernel32.dll!SetFileAttributesA */
            t25 = g->ecx;
            t26 = g->edx;
            eax = t24;
            ecx = t25;
            edx = t26;
        }
    }
    wr32(sp0 - 0xcu, self + 0xe48u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t27 = cow_stdcall(g, rd32(COW_IMG(0x10329124u)), 1, self + 0xe48u);   /* kernel32.dll!DeleteFileA */
    t28 = g->ecx;
    t29 = g->edx;
    wr32(sp0 - 0xcu, 0xeu);
    wr32(sp0 - 0x10u, self + 0xe48u);
    t30 = cow_cdecl(g, COW_IMG(0x10310ebfu), 2, self + 0xe48u, 0xeu);
    wr32(self + 0x208u, t30);
    if ((int32_t)t30 >= 0)
    {
        edi = rd32(sp0 - 8u);
        goto L_100f3f85;
    }
    eax = t30;
    edi = rd32(sp0 - 8u);
    if (arg3 == 0u) goto L_100f4052;
    wr32(arg3, eax);
    g->esi = rd32(sp0 - 4u);
    g->edi = edi;
    return 0x13u;
L_100f3f85: ;
    wr32(self + 0x20cu, 0xffffffffu);
    g->esi = rd32(sp0 - 4u);
    g->edi = edi;
    return 0x16u;
L_100f3f98: ;
    if ((int32_t)rd32(self + 0x20cu) >= 0)
    {
        eax = rd32(self + 0x20cu);
        goto L_100f400c;
    }
    t2 = rd32(self + 0x208u);
    wr32(sp0 - 8u, t2);
    g->eax = t2;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t3 = cow_cdecl(g, COW_IMG(0x10310ecau), 1, t2);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 != 0u)
    {
        eax = t3;
        ecx = t4;
        edx = t5;
        sf = (int32_t)t3 < 0;
        goto L_100f3fbe;
    }
    g->esi = rd32(sp0 - 4u);
    return 0x16u;
L_100f3fbe: ;
    if (!sf) goto L_100f3fd3;
    if (arg3 != 0u)
    {
        wr32(arg3, eax);
    }
    t6 = rd32(self + 0x208u);
    wr32(sp0 - 8u, t6);
    ecx = t6;
L_100f4040: ;
    g->esp = sp0 - 8u;
    cow_stdcall(g, COW_IMG(0x10310ed5u), 0);
    wr32(self + 0x208u, 0xffffffffu);
    edi = in_edi;
L_100f4052: ;
    g->esi = rd32(sp0 - 4u);
    g->edi = edi;
    return 0x13u;
L_100f3fd3: ;
    t7 = rd32(rd32(self + 0xa0u) + 0x38u);
    t8 = rd32(self + 0xa0u);
    t9 = rd32(rd32(self + 0xa0u) + 0x38u);
    wr32(self + 0x20cu, t7);
    if ((int32_t)t9 > 0)
    {
        eax = t7;
        goto L_100f3fef;
    }
    edx = t8;
    t10 = rd32(self + 0x208u);
    wr32(sp0 - 8u, t10);
    eax = t10;
L_100f4062: ;
    g->esp = sp0 - 8u;
    cow_stdcall(g, COW_IMG(0x10310ed5u), 0);
    wr32(self + 0x208u, 0xffffffffu);
    g->esi = rd32(sp0 - 4u);
    return 0x17u;
L_100f3fef: ;
    wr32(sp0 - 8u, eax);
    t11 = rd32(self + 0xa4u);
    wr32(sp0 - 0xcu, t11);
    t12 = rd32(self + 0x208u);
    wr32(sp0 - 0x10u, t12);
    g->eax = eax;
    g->edx = t12;
    g->esp = sp0 - 4u;
    t13 = cow_cdecl(g, COW_IMG(0x10310f0cu), 3, t12, t11, eax);
    t14 = g->edx;
    if ((int32_t)t13 >= 0) goto L_100f4024;
    eax = t13;
    edx = t14;
L_100f402f: ;
    if (arg3 != 0u)
    {
        wr32(arg3, eax);
    }
    t18 = rd32(self + 0x208u);
    wr32(sp0 - 8u, t18);
    eax = t18;
    ecx = arg3;
    goto L_100f4040;
L_100f400c: ;
    wr32(sp0 - 8u, sp0 + 4u);
    t15 = rd32(self + 0x208u);
    wr32(sp0 - 0xcu, t15);
    g->eax = eax;
    g->edx = t15;
    g->esp = sp0 - 4u;
    t16 = cow_cdecl(g, COW_IMG(0x10310f17u), 2, t15, sp0 + 4u);
    t17 = g->edx;
    if (t16 != 0u)
    {
        eax = t16;
        edx = t17;
        sf = (int32_t)t16 < 0;
        goto L_100f402d;
    }
L_100f4024: ;
    g->esi = rd32(sp0 - 4u);
    return 0x16u;
L_100f402d: ;
    if (!sf) goto L_100f405b;
    goto L_100f402f;
L_100f405b: ;
    t19 = rd32(self + 0x208u);
    wr32(sp0 - 8u, t19);
    ecx = t19;
    goto L_100f4062;
L_100f407d: ;
    if ((int32_t)rd32(self + 0x208u) >= 0)
    {
        eax = rd32(self + 0x208u);
        wr32(sp0 - 8u, eax);
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x10310ed5u), 1, eax);
        wr32(self + 0x208u, 0xffffffffu);
    }
    return 6u;
L_100f40a3: ;
    return 0x15u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f3f10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f3f10(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
