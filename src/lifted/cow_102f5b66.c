/* f_0x102f5b66 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102f5b66(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;

    if (rd32(in_esi + 0x120u) != 1u)
    {
        eax = rd32(in_esi + 0x120u);
        if ((int32_t)eax <= 0) goto L_102f5bd6;
        if ((int32_t)eax <= 4)
        {
            ecx = 4u;
            edx = in_edx;
            goto L_102f5bf5;
        }
L_102f5bd6: ;
        wr32(rd32(in_esi) + 0x14u, 0x18u);
        t8 = rd32(in_esi + 0x120u);
        wr32(rd32(in_esi) + 0x18u, t8);
        wr32(rd32(in_esi) + 0x1cu, 4u);
        g->edx = t8;
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, rd32(rd32(in_esi)), 4u, 0);
        t9 = g->edx;
        ecx = in_esi;
        edx = t9;
L_102f5bf5: ;
        t10 = rd32(in_esi + 0x10cu) << 3u;
        t11 = rd32(in_esi + 0x18u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t12 = cow_cdecl(g, COW_IMG(0x102f58cdu), 2, t11, t10);
        t13 = g->ecx;
        t14 = g->edx;
        wr32(in_esi + 0x134u, t12);
        t15 = rd32(in_esi + 0x110u) << 3u;
        t16 = rd32(in_esi + 0x1cu);
        g->esp = sp0 - 0x1cu;
        t17 = cow_cdecl(g, COW_IMG(0x102f58cdu), 2, t16, t15);
        t18 = rd32(in_esi + 0x120u);
        wr32(in_esi + 0x138u, t17);
        wr32(in_esi + 0x13cu, 0u);
        if ((int32_t)t18 <= 0)
        {
            eax = t17;
        }
        else
        {
            loc_8 = 0u;
            loc_c = in_esi + 0x124u;
L_102f5c46: ;
            t19 = rd32(rd32(loc_c) + 0x24u) * rd32(rd32(loc_c) + 8u);
            t20 = rd32(loc_c);
            t21 = rd32(rd32(loc_c) + 8u);
            t22 = rd32(rd32(loc_c) + 0xcu);
            wr32(t20 + 0x40u, t19);
            t23 = cow_divu(g, rd32(t20 + 0x1cu), t21);
            t24 = cow_modu(g, rd32(t20 + 0x1cu), t21);
            wr32(t20 + 0x38u, t22);
            wr32(t20 + 0x34u, t21);
            wr32(t20 + 0x3cu, t22 * t21);
            if (t24 != 0u)
            {
                ecx = t20;
                edx = t24;
                edi = t22 * t21;
            }
            else
            {
                ecx = t20;
                ebx = t21;
                edi = t22 * t21;
                edx = ebx;
            }
            t25 = rd32(ecx + 0x20u);
            t26 = rd32(ecx + 0xcu);
            wr32(ecx + 0x44u, edx);
            t27 = cow_divu(g, t25, t26);
            t28 = cow_modu(g, t25, t26);
            if (t28 != 0u)
            {
                edx = t28;
            }
            else
            {
                ebx = t26;
                edx = ebx;
            }
            wr32(ecx + 0x48u, edx);
            if ((int32_t)(edi + rd32(in_esi + 0x13cu)) > 10)
            {
                wr32(rd32(in_esi) + 0x14u, 0xbu);
                g->esp = sp0 - 0x18u;
                cow_thiscall(g, rd32(rd32(in_esi)), ecx, 0);
            }
            if ((int32_t)edi <= 0) goto L_102f5cc2;
L_102f5ca9: ;
            wr32(in_esi + rd32(in_esi + 0x13cu) * 4u + 0x140u, loc_8);
            wr32(in_esi + 0x13cu, rd32(in_esi + 0x13cu) + 1u);
            if (edi != 1u)
            {
                edi = edi - 1u;
                goto L_102f5ca9;
            }
L_102f5cc2: ;
            if ((int32_t)(loc_8 + 1u) < (int32_t)rd32(in_esi + 0x120u))
            {
                loc_8 = loc_8 + 1u;
                loc_c = loc_c + 4u;
                goto L_102f5c46;
            }
            eax = loc_8 + 1u;
        }
    }
    else
    {
        t1 = rd32(rd32(in_esi + 0x124u) + 0x1cu);
        t2 = rd32(in_esi + 0x124u);
        wr32(in_esi + 0x134u, t1);
        t3 = rd32(t2 + 0x20u);
        wr32(in_esi + 0x138u, t3);
        t4 = rd32(t2 + 0x24u);
        t5 = rd32(t2 + 0xcu);
        wr32(t2 + 0x40u, t4);
        t6 = cow_divu(g, rd32(t2 + 0x20u), t5);
        t7 = cow_modu(g, rd32(t2 + 0x20u), t5);
        wr32(t2 + 0x34u, 1u);
        wr32(t2 + 0x38u, 1u);
        wr32(t2 + 0x3cu, 1u);
        wr32(t2 + 0x44u, 1u);
        if (t7 != 0u)
        {
            eax = t6;
            ecx = t2;
            edx = t7;
        }
        else
        {
            eax = t6;
            ecx = t2;
            ebx = t5;
            edx = ebx;
        }
        wr32(ecx + 0x48u, edx);
        wr32(in_esi + 0x140u, 0u);
        wr32(in_esi + 0x13cu, 1u);
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f5b66(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102f5b66(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
