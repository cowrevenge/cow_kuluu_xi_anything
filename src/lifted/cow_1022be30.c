/* f_0x1022be30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1022be30(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_4;
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
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_ebp);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    wr32(sp0 - 0x18u, 0x5du);
    g->esp = sp0 - 0x14u;
    t1 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, in_edx, 1, 1, 0x5du);
    t2 = g->edx;
    wr32(sp0 - 0x18u, t1);
    g->ebx = self;
    g->edx = t2;
    t3 = rd32(COW_IMG(0x10662dccu));
    t4 = cow_thiscall(g, COW_IMG(0x101c4af0u), t3, 1, t1);
    t5 = g->ecx;
    t6 = g->edx;
    if ((int32_t)t4 < 0)
    {
        eax = t4;
        loc_4 = self;
        loc_8 = in_ebx;
        loc_c = in_ebp;
        loc_10 = in_esi;
        loc_14 = in_edi;
    }
    else
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        ebp = t4;
        esi = t1;
        wr32(sp0 - 0x18u, ebp);
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t7 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, ebp, in_edi, in_esi);
        t8 = g->edx;
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x1cu, ebp);
        wr32(sp0 - 0x20u, t7);
        wr32(sp0 - 0x24u, esi);
        g->ebx = self;
        g->edx = t8;
        t9 = rd32(COW_IMG(0x10662dccu));
        g->esp = sp0 - 0x14u;
        t10 = cow_thiscall(g, COW_IMG(0x101c4740u), t9, 4, esi, t7, ebp, 0u);
        t11 = g->ecx;
        t12 = g->edx;
        if ((int32_t)t10 < 0)
        {
            eax = t10;
            loc_4 = self;
            loc_8 = in_ebx;
            loc_c = in_ebp;
            loc_10 = in_esi;
            loc_14 = in_edi;
        }
        else
        {
            eax = t10;
            ecx = t11;
            edx = t12;
            edi = t7;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t13 = cow_stdcall(g, COW_IMG(0x10257850u), 0);
            t14 = g->edx;
            eax = t13;
            ecx = edi;
            edx = t14;
            esi = t13;
L_1022be81: ;
            if (rd8(ecx) != rd8(esi))
            {
                eax = (eax & 0xffffff00u) | rd8(ecx);
                edx = (edx & 0xffffff00u) | rd8(ecx);
                cf = rd8(ecx) < rd8(esi);
                goto L_1022bea5;
            }
            eax = (eax & 0xffffff00u) | rd8(ecx);
            edx = (edx & 0xffffff00u) | rd8(ecx);
            if ((uint8_t)eax == 0u) goto L_1022bea1;
            if (rd8(ecx + 1u) != rd8(esi + 1u))
            {
                eax = (eax & 0xffffff00u) | rd8(ecx + 1u);
                edx = (edx & 0xffffff00u) | rd8(ecx + 1u);
                cf = rd8(ecx + 1u) < rd8(esi + 1u);
                goto L_1022bea5;
            }
            eax = (eax & 0xffffff00u) | rd8(ecx + 1u);
            edx = (edx & 0xffffff00u) | rd8(ecx + 1u);
            if ((uint8_t)eax != 0u)
            {
                ecx = ecx + 2u;
                esi = esi + 2u;
                goto L_1022be81;
            }
L_1022bea1: ;
            eax = 0u;
L_1022beaa: ;
            if (eax != 0u)
            {
                loc_4 = rd32(sp0 - 4u);
                loc_8 = rd32(sp0 - 8u);
                loc_c = rd32(sp0 - 0xcu);
                loc_10 = rd32(sp0 - 0x10u);
                loc_14 = rd32(sp0 - 0x14u);
            }
            else
            {
                wr32(sp0 - 0x18u, ebp);
                wr32(sp0 - 0x1cu, edi);
                g->ebx = self;
                g->esp = sp0 - 0x14u;
                cow_fastcall(g, COW_IMG(0x102579a0u), self, edx, 2, edi, ebp);
                t15 = g->ecx;
                t16 = g->edx;
                wr32(sp0 - 4u, 0u);
                wr32(sp0 - 0x18u, sp0 - 4u);
                wr32(sp0 - 0x1cu, edi);
                g->eax = sp0 - 4u;
                g->edx = t16;
                t17 = cow_cdecl(g, COW_IMG(0x10257690u), 2, edi, sp0 - 4u);
                t18 = g->edx;
                wr32(sp0 - 0x18u, 0u);
                wr32(sp0 - 0x1cu, t17);
                g->ebx = self;
                t19 = cow_fastcall(g, COW_IMG(0x102579a0u), self, t18, 2, t17, 0u);
                t20 = g->ecx;
                t21 = g->edx;
                wr32(sp0 - 0x18u, edi);
                t22 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t20, t21, 1, 1, edi);
                t23 = g->ecx;
                t24 = g->edx;
                wr32(sp0 - 0x1cu, 0x5eu);
                g->esp = sp0 - 0x18u;
                t25 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t24, 1, 1, 0x5eu);
                t26 = g->edx;
                wr32(sp0 - 0x18u, t25);
                g->esp = sp0 - 0x14u;
                t27 = cow_thiscall(g, COW_IMG(0x101c80c0u), self + 0x10u, 1, t25);
                eax = t27;
                loc_4 = 0u;
                loc_8 = rd32(sp0 - 8u);
                loc_c = rd32(sp0 - 0xcu);
                loc_10 = rd32(sp0 - 0x10u);
                loc_14 = rd32(sp0 - 0x14u);
            }
        }
    }
    g->ebx = loc_8;
    g->esi = loc_10;
    g->edi = loc_14;
    g->ebp = loc_c;
    return eax;
L_1022bea5: ;
    eax = -cf + 1u - cf;
    goto L_1022beaa;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022be30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1022be30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
