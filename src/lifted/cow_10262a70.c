/* f_0x10262a70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10262a70(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_20;
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
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
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
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327b58u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    if (rd32(sp0 + 8u) != 0u)
    {
        ebx = rd32(sp0 + 8u);
        loc_c = t1;
        if (arg3 != 0u)
        {
            t2 = rd32(rd32(sp0 + 4u) + 0x14u);
            wr32(sp0 - 0x20u, t2);
            t3 = rd32(sp0 + 4u);
            wr32(sp0 + 8u, t2);
            wr32(sp0 + 4u, t2);
            g->ecx = self;
            g->edx = in_edx;
            g->esp = sp0 - 0x1cu;
            cow_stdcall(g, rd32(COW_IMG(0x1032918cu)), 1, t2);   /* kernel32.dll!EnterCriticalSection */
            t4 = g->ecx;
            t5 = g->edx;
            wr32(sp0 - 4u, 0u);
            if (rd32(t3 + 0xcu) == 0u)
            {
                edx = t5;
                esi = t2;
                edi = t3;
                if (rd32(rd32(edi + 0x1cu) + 0x14u) == 0u)
                {
                    eax = rd32(edi + 0x1cu);
                    goto L_10262b05;
                }
                eax = rd32(edi + 0x1cu);
                ecx = rd32(rd32(edi + 0x1cu) + 0x14u);
                if (rd8(edi + 0x19u) != 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(edi + 0x19u);
                    goto L_10262b05;
                }
                eax = (eax & 0xffffff00u) | rd8(edi + 0x19u);
                wr32(sp0 - 0x20u, esi);
                g->edx = edx;
                g->esp = sp0 - 0x1cu;
                cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, esi);   /* kernel32.dll!LeaveCriticalSection */
                t7 = g->edx;
                eax = 0x80040224u;
                edx = t7;
            }
            else
            {
                eax = rd32(t3 + 0xcu);
                ecx = t4;
                edx = t5;
                esi = t2;
                wr32(sp0 - 0x20u, esi);
                g->edx = edx;
                g->esp = sp0 - 0x1cu;
                cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, esi);   /* kernel32.dll!LeaveCriticalSection */
                t6 = g->edx;
                eax = 0x80040204u;
                edx = t6;
            }
        }
        else
        {
            eax = 0x80004003u;
            edx = in_edx;
        }
    }
    else
    {
        loc_c = t1;
        eax = 0x80004003u;
        edx = in_edx;
    }
L_10262bb6: ;
    wr32(g->fs_base, loc_c);
    g->edx = edx;
    return eax;
L_10262b05: ;
    wr32(sp0 - 0x20u, ebx);
    g->eax = eax;
    g->edx = rd32(edi - 0xcu);
    t8 = rd32(edi - 0xcu);
    g->esp = sp0 - 0x1cu;
    t9 = cow_thiscall(g, rd32(t8 + 0x28u), edi - 0xcu, 1, ebx);
    t10 = g->edx;
    if ((int32_t)t9 >= 0)
    {
        ecx = edi - 0xcu;
        esi = edi - 0xcu;
        goto L_10262b28;
    }
    ecx = edi - 0xcu;
    edx = t10;
    ebp = t9;
    esi = edi - 0xcu;
    g->eax = rd32(esi);
    g->edx = edx;
    t11 = rd32(esi);
    g->esp = sp0 - 0x1cu;
    t12 = cow_thiscall(g, rd32(t11 + 0x2cu), ecx, 0);
    t13 = g->edx;
    t14 = rd32(sp0 + 8u);
    wr32(sp0 - 0x20u, t14);
    eax = t12;
    ecx = t14;
    edx = t13;
    loc_20 = t14;
L_10262bae: ;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, loc_20);   /* kernel32.dll!LeaveCriticalSection */
    t36 = g->edx;
    eax = ebp;
    edx = t36;
    goto L_10262bb6;
L_10262b28: ;
    wr32(sp0 - 0x20u, arg3);
    g->eax = arg3;
    g->edx = rd32(esi);
    t15 = rd32(esi);
    g->esp = sp0 - 0x1cu;
    t16 = cow_thiscall(g, rd32(t15 + 0x20u), ecx, 1, arg3);
    t17 = g->edx;
    if (t16 == 0u)
    {
        eax = t16;
        edx = t17;
        goto L_10262b5a;
    }
    eax = t16;
    ebp = t16;
    g->edx = rd32(esi);
    t18 = rd32(esi);
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(t18 + 0x2cu), esi, 0);
    t19 = g->ecx;
    t20 = g->edx;
    if ((int32_t)ebp >= 0)
    {
        ecx = t19;
        edx = t20;
        goto L_10262b53;
    }
    ecx = t19;
    edx = t20;
    if (ebp == 0x80004005u) goto L_10262b53;
    if (ebp != 0x80070057u) goto L_10262ba9;
L_10262b53: ;
    ebp = 0x8004022au;
L_10262ba9: ;
    t35 = rd32(sp0 + 8u);
    wr32(sp0 - 0x20u, t35);
    eax = t35;
    loc_20 = t35;
    goto L_10262bae;
L_10262b5a: ;
    wr32(edi + 0xcu, ebx);
    wr32(sp0 - 0x20u, ebx);
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(rd32(ebx) + 4u), rd32(ebx), 1, ebx);
    wr32(sp0 - 0x20u, arg3);
    g->eax = arg3;
    g->edx = rd32(esi);
    t21 = rd32(esi);
    t22 = cow_thiscall(g, rd32(t21 + 0x24u), esi, 1, arg3);
    t23 = g->edx;
    if ((int32_t)t22 < 0)
    {
        edx = t23;
        ebp = t22;
        goto L_10262b92;
    }
    eax = t22;
    wr32(sp0 - 0x20u, ebx);
    g->eax = eax;
    g->edx = rd32(esi);
    t24 = rd32(esi);
    g->esp = sp0 - 0x1cu;
    t25 = cow_thiscall(g, rd32(t24 + 0x30u), esi, 1, ebx);
    t26 = g->ecx;
    t27 = g->edx;
    if ((int32_t)t25 < 0)
    {
        edx = t27;
        ebp = t25;
        goto L_10262b92;
    }
    ecx = t26;
    edx = t27;
    t28 = rd32(sp0 + 8u);
    wr32(sp0 - 0x20u, t28);
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, t28);   /* kernel32.dll!LeaveCriticalSection */
    t29 = g->edx;
    eax = 0u;
    edx = t29;
    goto L_10262bb6;
L_10262b92: ;
    t30 = rd32(edi + 0xcu);
    wr32(sp0 - 0x20u, t30);
    g->eax = t30;
    g->esp = sp0 - 0x1cu;
    t31 = cow_thiscall(g, rd32(rd32(t30) + 8u), rd32(t30), 1, t30);
    t32 = rd32(esi);
    wr32(edi + 0xcu, 0u);
    g->edx = t32;
    cow_thiscall(g, rd32(t32 + 0x2cu), esi, 0);
    t33 = g->ecx;
    t34 = g->edx;
    ecx = t33;
    edx = t34;
    goto L_10262ba9;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10262a70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10262a70(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
