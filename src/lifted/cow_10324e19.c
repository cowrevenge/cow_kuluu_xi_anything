/* f_0x10324e19 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10324e19(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    eax = in_eax;
    ecx = self;
    edx = in_edx;
    ebx = 0u;
    esi = rd32(COW_IMG(0x103d3814u));
    loc_8 = 7u;
    loc_c = rd32(COW_IMG(0x103d3814u));
L_10324e33: ;
    t1 = rd32(esi + 0x1cu);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t2 = cow_call_regs(g, COW_IMG(0x10317480u), eax, g->ecx, g->edx, 1, 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    g->edx = t4;
    t5 = rd32(esi);
    g->esp = sp0 - 0x1cu;
    t6 = cow_call_regs(g, COW_IMG(0x10317480u), t2, g->ecx, g->edx, 1, 1, t5);
    t7 = g->edx;
    if (loc_8 != 1u)
    {
        eax = ebx + t6;
        ecx = t1;
        edx = t7;
        ebx = ebx + t2 + t6 + 2u;
        esi = esi + 4u;
        loc_8 = loc_8 - 1u;
        goto L_10324e33;
    }
    ecx = t1;
    edx = t7;
    ebx = ebx + t2 + t6 + 2u;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t8 = cow_cdecl(g, COW_IMG(0x10312fd6u), 3, ebx + 1u, in_edi, in_esi);
    t9 = g->edx;
    if (t8 == 0u)
    {
        edx = t9;
        loc_8 = t8;
    }
    else
    {
        ecx = ebx + 1u;
        edx = t9;
        esi = t8;
        loc_8 = t8;
        ebx = 7u;
        edi = loc_c;
L_10324e6b: ;
        wr8(esi, 0x3au);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t10 = cow_cdecl(g, COW_IMG(0x10317500u), 3, esi + 1u, rd32(edi), in_edi);
        t11 = g->ecx;
        t12 = g->edx;
        g->ecx = t11;
        g->edx = t12;
        g->esp = sp0 - 0x20u;
        t13 = cow_call_regs(g, COW_IMG(0x10317480u), t10, g->ecx, g->edx, 1, 1, t10);
        t14 = g->ecx;
        t15 = g->edx;
        wr8(esi + t13 + 1u, 0x3au);
        t16 = rd32(edi + 0x1cu);
        t17 = esi + t13 + 2u;
        g->ecx = t14;
        g->edx = t15;
        t18 = cow_cdecl(g, COW_IMG(0x10317500u), 3, t17, t16, t10);
        t19 = g->ecx;
        t20 = g->edx;
        g->ecx = t19;
        g->edx = t20;
        g->esp = sp0 - 0x2cu;
        t21 = cow_call_regs(g, COW_IMG(0x10317480u), t18, g->ecx, g->edx, 1, 1, t18);
        t22 = g->ecx;
        t23 = g->edx;
        if (ebx != 1u)
        {
            ecx = t22;
            edx = t23;
            ebx = ebx - 1u;
            esi = t17 + t21;
            edi = edi + 4u;
            goto L_10324e6b;
        }
        edx = t23;
        esi = t17 + t21;
        wr8(esi, 0u);
    }
    g->edx = edx;
    return loc_8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10324e19(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10324e19(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
