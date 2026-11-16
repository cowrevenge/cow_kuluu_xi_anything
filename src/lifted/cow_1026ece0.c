/* f_0x1026ece0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1026ece0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1c;
    uint32_t loc_4;
    uint32_t loc_8;
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t1 = cow_cdecl(g, COW_IMG(0x10273890u), 1, 1u);
    t2 = g->ecx;
    t3 = g->edx;
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x1cu;
    t4 = cow_cdecl(g, COW_IMG(0x10273890u), 1, 2u);
    t5 = g->ecx;
    t6 = g->edx;
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0x18u;
    t7 = cow_stdcall(g, COW_IMG(0x102738c0u), 0);
    t8 = g->ecx;
    t9 = g->edx;
    g->ecx = t8;
    g->edx = t9;
    cow_stdcall(g, COW_IMG(0x1026ee20u), 0);
    t10 = g->ecx;
    t11 = g->edx;
    if ((int32_t)rd32(COW_IMG(0x1099aeccu)) <= 0)
    {
        edx = t11;
    }
    else
    {
        ecx = t10;
        edx = t11;
        loc_4 = rd32(COW_IMG(0x1099aeccu));
        ebp = 0xffffffffu;
        esi = 0u;
        edi = 0u;
        loc_8 = 0u;
L_1026ed1e: ;
        if (rd32(esi + rd32(COW_IMG(0x1099aed0u)) + 0xa8u) != 0u)
        {
            ebx = esi + rd32(COW_IMG(0x1099aed0u)) + 0xa8u;
            esi = esi + rd32(COW_IMG(0x1099aed0u));
            if ((rd32(esi) & 0x20u) == 0u)
            {
                eax = rd32(esi);
                goto L_1026ed72;
            }
            eax = rd32(esi);
            if ((int32_t)ebp < 0) goto L_1026ed90;
            g->ebx = ebx;
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t12 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b1a2cu), in_edi);
            t13 = g->ecx;
            t14 = g->edx;
            g->ebx = ebx;
            g->ecx = t13;
            g->edx = t14;
            g->esp = sp0 - 0x20u;
            cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b1a0cu), edi);
            t15 = g->ecx;
            t16 = g->edx;
            if (!(rd32(esi) >> 8u & 1u))
            {
                eax = rd32(esi);
                ecx = t15;
                edx = t16;
                g->ebx = ebx;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 8u;
                cow_cdecl(g, COW_IMG(0x10277ad0u), 5, ebx, in_edi, in_esi, in_ebp, in_ebx);
                t17 = g->ecx;
                t18 = g->edx;
                ecx = t17;
                edx = t18;
            }
            else
            {
                ecx = t15;
                edx = t16;
                wr32(ebx, 0u);
            }
L_1026ed8a: ;
            wr32(COW_IMG(0x1099aeccu), rd32(COW_IMG(0x1099aeccu)) - 1u);
        }
L_1026ed90: ;
        if ((int32_t)(edi + 1u) < (int32_t)loc_4)
        {
            esi = loc_8 + 0xacu;
            edi = edi + 1u;
            loc_8 = loc_8 + 0xacu;
            goto L_1026ed1e;
        }
    }
    if ((int32_t)rd32(COW_IMG(0x1099aeccu)) > 0)
    {
        ebx = 0u;
        edi = 0u;
L_1026edbd: ;
        if (rd32(edi + rd32(COW_IMG(0x1099aed0u)) + 0xa8u) != 0u)
        {
            eax = rd32(edi + rd32(COW_IMG(0x1099aed0u)) + 0xa8u);
            ecx = rd32(COW_IMG(0x1099aed0u));
            esi = edi + rd32(COW_IMG(0x1099aed0u)) + 0xa8u;
            if ((rd32(eax + 0xa8u) & 0x8000u) == 0u)
            {
                loc_1c = 1u;
            }
            else
            {
                loc_1c = 2u;
            }
            g->ebx = ebx;
            g->eax = eax;
            g->ecx = ecx;
            g->esp = sp0 - 8u;
            t21 = cow_cdecl(g, COW_IMG(0x10273700u), 6, eax, loc_1c, in_edi, in_esi, in_ebp, in_ebx);
            t22 = g->ecx;
            g->ebx = ebx;
            g->edx = rd32(esi);
            t23 = rd32(esi);
            g->esp = sp0 - 0x18u;
            cow_cdecl(g, COW_IMG(0x10273830u), 2, t23, 1u);
            t24 = g->edx;
            edx = t24;
        }
        if ((int32_t)(ebx + 1u) < (int32_t)rd32(COW_IMG(0x1099aeccu)))
        {
            ebx = ebx + 1u;
            edi = edi + 0xacu;
            goto L_1026edbd;
        }
    }
    g->ebx = in_ebx;
    return 0u;
L_1026ed72: ;
    if (!(eax >> 8u & 1u))
    {
        g->ebx = ebx;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x10277ad0u), 5, ebx, in_edi, in_esi, in_ebp, in_ebx);
        t19 = g->ecx;
        t20 = g->edx;
        ecx = t19;
        edx = t20;
    }
    else
    {
        wr32(ebx, 0u);
    }
    ebp = edi;
    goto L_1026ed8a;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026ece0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1026ece0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
