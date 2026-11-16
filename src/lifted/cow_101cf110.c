/* f_0x101cf110 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101cf110(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(sp0 + 4u) == 0u) goto L_101cf33b;
    ebx = rd32(sp0 + 4u);
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t1 = cow_thiscall(g, COW_IMG(0x101ceab0u), ebx, 0);
    t2 = g->ecx;
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x101cebe0u), t2, 0);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        ecx = t5;
        edx = t6;
        ebp = t1;
        loc_8 = t1;
        goto L_101cf181;
    }
    ebp = t1;
    loc_8 = t1;
    if ((int32_t)((-(ebp != 0u) & 0x57u) + 5u) <= 0) goto L_101cf33b;
    ebp = (-(ebp != 0u) & 0x57u) + 5u;
    edi = 0u;
L_101cf14f: ;
    g->edx = 0x80ff6060u;
    g->esp = sp0 - 0x18u;
    t7 = cow_thiscall(g, COW_IMG(0x101ceac0u), ebx, 0);
    t8 = g->edx;
    if (edi != t7)
    {
        edx = t8;
    }
    else
    {
        edx = 0x808080ffu;
    }
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x101cf4d0u), self, 3, loc_8, edi, edx);
    if ((int32_t)(edi + 1u) < (int32_t)ebp)
    {
        edi = edi + 1u;
        goto L_101cf14f;
    }
    return;
L_101cf181: ;
    g->esp = sp0 - 0x18u;
    t9 = cow_cdecl(g, COW_IMG(0x101cce60u), 1, ebp);
    t10 = rd8(t9);
    t11 = rd8(t9 + 1u);
    wr32(sp0 + 4u, t10);
    if ((int32_t)t10 >= (int32_t)t11)
    {
        edx = t9;
        loc_4 = t9;
        goto L_101cf1f9;
    }
    edx = t9;
    ebp = t10;
    loc_4 = t9;
L_101cf1a3: ;
    t12 = rd8(edx + 2u);
    if ((int32_t)t12 >= (int32_t)rd8(edx + 3u)) goto L_101cf1eb;
    edi = t12;
L_101cf1b3: ;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t13 = cow_thiscall(g, COW_IMG(0x101cefd0u), self, 5, ebp, edi, 1u, 1u, 1u);
    t14 = g->edx;
    if ((uint8_t)t13 == 0u)
    {
        ebp = rd32(sp0 + 4u);
    }
    else
    {
        eax = t13;
        edx = t14;
        ebp = rd32(sp0 + 4u);
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, COW_IMG(0x101cf350u), self, 4, loc_8, ebp, edi, 0x80ff6060u);
    }
    if ((int32_t)(edi + 1u) < (int32_t)rd8(loc_4 + 3u))
    {
        edx = loc_4;
        edi = edi + 1u;
        goto L_101cf1b3;
    }
    edx = loc_4;
L_101cf1eb: ;
    t15 = rd8(edx + 1u);
    wr32(sp0 + 4u, ebp + 1u);
    if ((int32_t)(ebp + 1u) < (int32_t)t15)
    {
        ebp = ebp + 1u;
        goto L_101cf1a3;
    }
L_101cf1f9: ;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t16 = cow_thiscall(g, COW_IMG(0x101cec00u), ebx, 0);
    t17 = g->edx;
    if ((uint8_t)t16 == 0u)
    {
        edx = t17;
    }
    else
    {
        edx = t17;
        t18 = rd8(edx);
        t19 = rd8(edx + 1u);
        wr32(sp0 + 4u, t18);
        if ((int32_t)t18 >= (int32_t)t19) goto L_101cf26d;
        ebp = t18;
L_101cf217: ;
        t20 = rd8(edx + 2u);
        if ((int32_t)t20 >= (int32_t)rd8(edx + 3u)) goto L_101cf25f;
        edi = t20;
L_101cf227: ;
        g->esp = sp0 - 0x18u;
        t21 = cow_thiscall(g, COW_IMG(0x101cefd0u), self, 5, ebp, edi, 1u, 1u, 2u);
        if ((uint8_t)t21 == 0u)
        {
            ebp = rd32(sp0 + 4u);
        }
        else
        {
            eax = t21;
            ebp = rd32(sp0 + 4u);
            g->esp = sp0 - 0x18u;
            cow_thiscall(g, COW_IMG(0x101cf350u), self, 4, loc_8, ebp, edi, 0x8060ff60u);
        }
        if ((int32_t)(edi + 1u) < (int32_t)rd8(loc_4 + 3u))
        {
            edx = loc_4;
            edi = edi + 1u;
            goto L_101cf227;
        }
        edx = loc_4;
L_101cf25f: ;
        t22 = rd8(edx + 1u);
        wr32(sp0 + 4u, ebp + 1u);
        if ((int32_t)(ebp + 1u) < (int32_t)t22)
        {
            ebp = ebp + 1u;
            goto L_101cf217;
        }
    }
L_101cf26d: ;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t23 = cow_thiscall(g, COW_IMG(0x101ceb40u), ebx, 0);
    t24 = g->edx;
    g->edx = t24;
    g->esp = sp0 - 0x20u;
    t25 = cow_thiscall(g, COW_IMG(0x101ceaf0u), ebx, 0);
    t26 = g->edx;
    g->edx = t26;
    g->esp = sp0 - 0x24u;
    t27 = cow_thiscall(g, COW_IMG(0x101ceae0u), ebx, 0);
    t28 = g->ecx;
    t29 = g->edx;
    g->edx = t29;
    g->esp = sp0 - 0x28u;
    t30 = cow_thiscall(g, COW_IMG(0x101ceac0u), t28, 0);
    t31 = g->edx;
    g->edx = t31;
    g->esp = sp0 - 0x18u;
    t32 = cow_thiscall(g, COW_IMG(0x101cefd0u), self, 5, t30, t27, t25, t23, 1u);
    t33 = g->edx;
    if ((uint8_t)t32 == 0u)
    {
        edx = t33;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t34 = cow_thiscall(g, COW_IMG(0x101cec00u), ebx, 0);
        t35 = g->ecx;
        t36 = g->edx;
        if ((uint8_t)t34 == 0u)
        {
            edx = t36;
            goto L_101cf2de;
        }
        ecx = t35;
        edx = t36;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t37 = cow_thiscall(g, COW_IMG(0x101ceb40u), ecx, 0);
        t38 = g->edx;
        g->edx = t38;
        g->esp = sp0 - 0x20u;
        t39 = cow_thiscall(g, COW_IMG(0x101ceaf0u), ebx, 0);
        t40 = g->edx;
        g->edx = t40;
        g->esp = sp0 - 0x24u;
        t41 = cow_thiscall(g, COW_IMG(0x101ceae0u), ebx, 0);
        t42 = g->ecx;
        t43 = g->edx;
        g->edx = t43;
        g->esp = sp0 - 0x28u;
        t44 = cow_thiscall(g, COW_IMG(0x101ceac0u), t42, 0);
        t45 = g->edx;
        g->edx = t45;
        g->esp = sp0 - 0x18u;
        t46 = cow_thiscall(g, COW_IMG(0x101cefd0u), self, 5, t44, t41, t39, t37, 2u);
        t47 = g->edx;
        wr32(sp0 + 4u, 0x808080ffu);
        if ((uint8_t)t46 != 0u)
        {
            edx = t47;
            goto L_101cf2e6;
        }
        edx = t47;
L_101cf2de: ;
        wr32(sp0 + 4u, 0x80606060u);
    }
    else
    {
        edx = t33;
        wr32(sp0 + 4u, 0x808080ffu);
    }
L_101cf2e6: ;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t48 = cow_thiscall(g, COW_IMG(0x101ceaf0u), ebx, 0);
    t49 = g->edx;
    if ((int32_t)t48 <= 0) goto L_101cf33b;
    edx = t49;
    ebp = 0u;
L_101cf2f3: ;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t50 = cow_thiscall(g, COW_IMG(0x101ceb40u), ebx, 0);
    t51 = g->edx;
    if ((int32_t)t50 <= 0)
    {
        edx = t51;
        goto L_101cf32f;
    }
    edi = 0u;
L_101cf300: ;
    t52 = rd32(sp0 + 4u);
    g->edx = t52;
    g->esp = sp0 - 0x1cu;
    t53 = cow_thiscall(g, COW_IMG(0x101ceae0u), ebx, 0);
    t54 = g->ecx;
    t55 = g->edx;
    g->edx = t55;
    g->esp = sp0 - 0x20u;
    t56 = cow_thiscall(g, COW_IMG(0x101ceac0u), t54, 0);
    t57 = g->edx;
    g->edx = t57;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x101cf350u), self, 4, loc_8, ebp + t56, edi + t53, t52);
    t58 = g->edx;
    g->edx = t58;
    t59 = cow_thiscall(g, COW_IMG(0x101ceb40u), ebx, 0);
    t60 = g->edx;
    if ((int32_t)(edi + 1u) < (int32_t)t59)
    {
        edi = edi + 1u;
        goto L_101cf300;
    }
    edx = t60;
L_101cf32f: ;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t61 = cow_thiscall(g, COW_IMG(0x101ceaf0u), ebx, 0);
    t62 = g->edx;
    if ((int32_t)(ebp + 1u) < (int32_t)t61)
    {
        edx = t62;
        ebp = ebp + 1u;
        goto L_101cf2f3;
    }
L_101cf33b: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cf110(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101cf110(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
