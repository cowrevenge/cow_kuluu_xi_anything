/* f_0x10262210 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10262210(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 188u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327abbu));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(sp0 + 0xcu);
    t2 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0xa4u, in_ebx);
    wr32(sp0 - 0xa8u, in_ebp);
    wr32(sp0 - 0xacu, in_esi);
    if (t1 != 0u)
    {
        loc_c = t2;
        g->eax = rd32(rd32(arg1 + 8u));
        g->edx = in_edx;
        t3 = rd32(rd32(arg1 + 8u));
        g->esp = sp0 - 0xacu;
        t4 = cow_thiscall(g, rd32(t3 + 0x10u), rd32(arg1 + 8u), 0);
        t5 = g->edx;
        if (t4 == rd32(arg1 + 0xcu))
        {
            edx = t5;
            if (arg4 == 0u) goto L_10262283;
            wr32(arg4, 0u);
L_10262274: ;
            wr32(sp0 - 0xb0u, in_edi);
            wr32(sp0 - 0xa0u, 0u);
            if (arg2 == 0u)
            {
                ebp = arg2;
            }
            else
            {
                ebp = arg2;
L_10262299: ;
                g->esp = sp0 - 0xb0u;
                cow_thiscall(g, COW_IMG(0x1026a150u), sp0 - 0x9cu, 0);
                wr32(sp0 - 4u, 0u);
                t6 = rd32(arg1 + 4u) + 1u;
                t7 = rd32(arg1 + 4u);
                wr32(arg1 + 4u, t6);
                wr32(sp0 - 0xb4u, sp0 - 0x9cu);
                wr32(sp0 - 0xb8u, t7);
                g->eax = t7;
                g->edx = rd32(rd32(arg1 + 8u));
                t8 = rd32(arg1 + 8u);
                t9 = rd32(rd32(arg1 + 8u));
                t10 = cow_thiscall(g, rd32(t9 + 0x34u), t8, 2, t7, sp0 - 0x9cu);
                t11 = g->ecx;
                t12 = g->edx;
                if (t10 != 0u)
                {
                    eax = t10;
                    edx = t12;
                    goto L_1026233a;
                }
                eax = t10;
                ecx = t11;
                edx = t12;
                wr32(sp0 - 0xb4u, 0x48u);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0xb0u;
                t13 = cow_thiscall(g, rd32(COW_IMG(0x103294acu)), ecx, 1, 0x48u);
                t14 = g->edx;
                wr32(sp0 - 4u, 0xffffffffu);
                wr32(rd32(sp0 + 0xcu), t13);
                if (t13 == 0u)
                {
                    eax = t13;
                    edx = t14;
                    goto L_10262345;
                }
                eax = t13;
                t15 = rd32(sp0 - 0xa0u);
                esi = sp0 - 0x9cu;
                edi = sp0 - 0x54u;
                ecx = 0x12u;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                esi = sp0 - 0x54u;
                edi = eax;
                ecx = 0x12u;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                wr32(sp0 - 0x58u, 0u);
                wr32(sp0 - 0x5cu, 0u);
                wr32(sp0 - 0x60u, 0u);
                t16 = rd32(sp0 + 0xcu) + 4u;
                wr32(sp0 + 0xcu, t16);
                wr32(sp0 - 0xa0u, t15 + 1u);
                g->esp = sp0 - 0xb0u;
                cow_fastcall(g, COW_IMG(0x1026a140u), sp0 - 0x9cu, t15 + 1u, 0);
                t17 = g->edx;
                if (ebp != 1u)
                {
                    edx = t17;
                    ebp = ebp - 1u;
                    goto L_10262292;
                }
                edx = t17;
                ebp = ebp - 1u;
            }
L_1026234e: ;
            if (arg4 != 0u)
            {
                wr32(arg4, 0u);
                edx = 0u;
            }
            eax = ebp != 0u;
        }
        else
        {
            edx = t5;
            eax = 0x80040203u;
        }
    }
    else
    {
        loc_c = t2;
        eax = 0x80004003u;
        edx = in_edx;
    }
L_10262367: ;
    wr32(g->fs_base, loc_c);
    g->edx = edx;
    return eax;
L_10262283: ;
    if (arg2 <= 1u) goto L_10262274;
    eax = 0x80070057u;
    goto L_10262367;
L_10262292: ;
    goto L_10262299;
L_1026233a: ;
    wr32(sp0 - 4u, 0xffffffffu);
L_10262345: ;
    g->esp = sp0 - 0xb0u;
    cow_fastcall(g, COW_IMG(0x1026a140u), sp0 - 0x9cu, edx, 0);
    t18 = g->edx;
    edx = t18;
    goto L_1026234e;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10262210(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10262210(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
