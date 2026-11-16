/* f_0x101417c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101417c0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint32_t)(int16_t)arg1 - 1u > 8u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = in_edx;
        goto L_1014182a;
    }
    t1 = rd32(COW_IMG(0x10141830u) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x101417d2u: goto L_101417d2;
    case 0x101417dfu: goto L_101417df;
    case 0x101417ecu: goto L_101417ec;
    case 0x101417f9u: goto L_101417f9;
    case 0x10141806u: goto L_10141806;
    case 0x10141813u: goto L_10141813;
    case 0x10141820u: goto L_10141820;
    case 0x1014182au: eax = (uint32_t)(int16_t)arg1 - 1u; edx = in_edx; goto L_1014182a;
    default: rt_fatal(g, COW_IMG(0x101417cbu), "switch");
    }
    return 0;
L_101417d2: ;
    g->eax = arg2;
    g->edx = in_edx;
    g->esp = sp0;
    t14 = cow_thiscall(g, COW_IMG(0x101413f0u), self, 1, arg2);
    t15 = g->edx;
    g->edx = t15;
    return t14;
L_101417df: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = arg2;
    g->esp = sp0;
    t12 = cow_thiscall(g, COW_IMG(0x10141400u), self, 1, arg2);
    t13 = g->edx;
    g->edx = t13;
    return t12;
L_101417ec: ;
    g->esp = sp0;
    t10 = cow_call_regs(g, COW_IMG(0x10141430u), arg2, self, in_edx, 0, 1, arg2);
    t11 = g->edx;
    g->edx = t11;
    return t10;
L_101417f9: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->esp = sp0;
    t8 = cow_fastcall(g, COW_IMG(0x10141470u), self, arg2, 1, arg2);
    t9 = g->edx;
    g->edx = t9;
    return t8;
L_10141806: ;
    g->eax = arg2;
    g->esp = sp0;
    t6 = cow_fastcall(g, COW_IMG(0x10141700u), self, in_edx, 1, arg2);
    t7 = g->edx;
    g->edx = t7;
    return t6;
L_10141813: ;
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = arg2;
    g->esp = sp0;
    t4 = cow_thiscall(g, COW_IMG(0x10141730u), self, 1, arg2);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_10141820: ;
    g->eax = arg2;
    g->edx = in_edx;
    g->esp = sp0;
    t2 = cow_stdcall(g, COW_IMG(0x101417b0u), 1, arg2);
    t3 = g->edx;
    eax = t2;
    edx = t3;
L_1014182a: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101417c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101417c0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
