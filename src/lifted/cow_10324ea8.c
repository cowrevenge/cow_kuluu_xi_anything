/* f_0x10324ea8 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10324ea8(Guest* g)
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
    uint32_t t24;
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
    esi = rd32(COW_IMG(0x103d3814u)) + 0x38u;
    edi = rd32(COW_IMG(0x103d3814u));
    loc_8 = 0u;
    loc_c = 0xcu;
L_10324ec4: ;
    t1 = rd32(esi + 0x30u);
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
    t8 = loc_8 + t2 + t6 + 2u;
    if (loc_c != 1u)
    {
        eax = t8;
        ecx = t1;
        edx = t7;
        esi = esi + 4u;
        loc_8 = t8;
        loc_c = loc_c - 1u;
        goto L_10324ec4;
    }
    eax = t8;
    ecx = t1;
    edx = t7;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t9 = cow_cdecl(g, COW_IMG(0x10312fd6u), 3, eax + 1u, in_edi, in_esi);
    t10 = g->edx;
    if (t9 == 0u)
    {
        edx = t10;
        loc_c = t9;
    }
    else
    {
        ecx = eax + 1u;
        edx = t10;
        esi = t9;
        loc_c = t9;
        ebx = 0xcu;
        edi = edi + 0x68u;
L_10324f00: ;
        wr8(esi, 0x3au);
        t11 = rd32(edi - 0x30u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t12 = cow_cdecl(g, COW_IMG(0x10317500u), 3, esi + 1u, t11, in_edi);
        t13 = g->ecx;
        t14 = g->edx;
        g->ecx = t13;
        g->edx = t14;
        g->esp = sp0 - 0x20u;
        t15 = cow_call_regs(g, COW_IMG(0x10317480u), t12, g->ecx, g->edx, 1, 1, t12);
        t16 = g->ecx;
        t17 = g->edx;
        wr8(esi + t15 + 1u, 0x3au);
        t18 = esi + t15 + 2u;
        g->ecx = t16;
        g->edx = t17;
        t19 = cow_cdecl(g, COW_IMG(0x10317500u), 3, t18, rd32(edi), t12);
        t20 = g->ecx;
        t21 = g->edx;
        g->ecx = t20;
        g->edx = t21;
        g->esp = sp0 - 0x2cu;
        t22 = cow_call_regs(g, COW_IMG(0x10317480u), t19, g->ecx, g->edx, 1, 1, t19);
        t23 = g->ecx;
        t24 = g->edx;
        if (ebx != 1u)
        {
            ecx = t23;
            edx = t24;
            ebx = ebx - 1u;
            esi = t18 + t22;
            edi = edi + 4u;
            goto L_10324f00;
        }
        edx = t24;
        esi = t18 + t22;
        wr8(esi, 0u);
    }
    g->edx = edx;
    return loc_c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10324ea8(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10324ea8(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
